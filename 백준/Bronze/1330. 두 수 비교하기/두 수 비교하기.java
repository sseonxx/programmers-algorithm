import java.io.*;
import java.util.*;

public class Main{
	


	public static void main(String[] args) {

        Scanner stdIn = new Scanner(System.in);
        
        int a= stdIn.nextInt();
        int b= stdIn.nextInt();

        
        if(a>b){
         System.out.println(">");
        }else if(a<b){
            System.out.println("<");
        }else{
            System.out.println("==");
        }

	
	}
}