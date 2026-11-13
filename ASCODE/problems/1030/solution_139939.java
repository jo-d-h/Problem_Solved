import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            String s = sc.next();

            StringBuilder result = new StringBuilder();

            for (int i = 0; i < s.length(); i++) {
                if (i + 7 < s.length() && s.substring(i, i + 8).equals("charchar")) {
                    i += 7;
                } else {
                    result.append(s.charAt(i));
                }
            }

            if (result.length() == 0) {
                System.out.println("i hate charchar");
            } else {
                System.out.println(result);
            }
        }
    }
}
/**************************************************************
	Problem: 1030
	Language: Java
	Result: Accepted
	Time:173 ms
	Memory:14332 kb
****************************************************************/

