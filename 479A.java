import java.util.*;
 
public class Main
{
  public static void main(String args[])
  { 
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = sc.nextInt();
    int ans;
    ans = Math.max(a+b+c, a*b*c);
    ans = Math.max(Math.max(ans, (a*b)+c), Math.max((a+b)*c, a*(b+c)));
    ans = Math.max(ans, a+(b*c));
    System.out.println(ans);
  }
}
