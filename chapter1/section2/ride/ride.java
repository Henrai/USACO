/*
ID: waz
LANG: JAVA
TASK: ride
*/
import java.io.*;
import java.util.*;

class ride { // The class name must be same as the TASK name!!
  
   public static int readNumber(String s) {
    int ans = 1;
        for (int i = 0; i < s.length(); i++) {
            ans *= (s.charAt(i) - 'A') + 1;
        }
      return ans%47;
  }

  public static void main (String [] args) throws IOException {
    BufferedReader in = new BufferedReader(new FileReader("ride.in"));
    PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("ride.out")));
    if(readNumber(in.readLine()) == readNumber(in.readLine())) 
        out.println("GO");
    else
        out.println("STAY");
    in.close();                           
    out.close();                                  
  }
}