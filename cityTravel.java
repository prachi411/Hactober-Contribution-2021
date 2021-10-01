import java.util.*;
public class cityTravel {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int s = sc.nextInt();
        int x = sc.nextInt();
        int n = sc.nextInt();
        int t[] = new int[n];
        int y[] = new int[n];
        for(int i=0;i<n;++i)
        {
            t[i] = sc.nextInt();
            y[i] = sc.nextInt();
        }
        int distance=0;
        for(int i=0;i<n;++i)
        {
            if(i==t[i]-1)
            distance += y[i];
            else
            distance += x;

        }
    }
}
