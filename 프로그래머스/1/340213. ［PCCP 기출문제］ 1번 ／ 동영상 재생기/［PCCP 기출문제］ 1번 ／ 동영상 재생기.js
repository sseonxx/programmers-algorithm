  const solution = (video_len, pos, op_start, op_end, commands) => {

    // 문자열 시간을 초 단위로 변환
    const timeStringToSeconds = (timeString) => {
      const [minutes, seconds] = timeString.split(':').map(Number);
      return minutes * 60 + seconds;
    };

    // 초를 "MM:SS" 형식의 문자열로 변환
    const secondsToTimeString = (seconds) => {
      const minutes = Math.floor(seconds / 60);
      const remainingSeconds = seconds % 60;
      return `${String(minutes).padStart(2, '0')}:${String(remainingSeconds).padStart(2, '0')}`;
    };

    // 초기값 설정
    let currentPosition = timeStringToSeconds(pos);
    const videoLength = timeStringToSeconds(video_len);
    const opStart = timeStringToSeconds(op_start);
    const opEnd = timeStringToSeconds(op_end);

    // 명령어 처리
    for (const command of commands) {
      if (command === "prev") {
        // 10초 전으로 이동, 최소 0초 보장
        currentPosition = Math.max(0, currentPosition - 10);
        // 오프닝 구간일 경우 >> 오프닝 끝나는 위치로 이동동
        if (currentPosition >= opStart && currentPosition < opEnd) {
          currentPosition = opEnd
        }

      } else if (command === "next") {
        // 현재 구간이 오프닝 + "next" => 오프닝 + 10초
        if (currentPosition >= opStart && currentPosition < opEnd) {
          currentPosition = opEnd + 10;
        } else {
          currentPosition = Math.min(videoLength, currentPosition + 10);
          // "next" 후 현재 구간이 오프닝 => 오프닝 마지막막
          if (currentPosition >= opStart && currentPosition < opEnd) {
            currentPosition = opEnd
          }
        }
      }
    }

    return secondsToTimeString(currentPosition);
  }