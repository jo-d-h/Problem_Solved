import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            String s = sc.next();
            String lower = s.toLowerCase();

            int count = 0;

            // char 개수 세기
            for (int i = 0; i + 3 < s.length(); i++) {
                if (lower.substring(i, i + 4).equals("char")) {
                    count++;
                    i += 3;
                }
            }

            if (count < 2) {
                System.out.println(s);
                continue;
            }

            StringBuilder result = new StringBuilder();

            // char 전부 제거
            for (int i = 0; i < s.length(); i++) {
                if (i + 3 < s.length() && lower.substring(i, i + 4).equals("char")) {
                    i += 3;
                } else {
                    result.append(s.charAt(i));
                }
            }

            if (result.length() == 0) {
                System.out.println("I Hate CharChar!");
            } else {
                System.out.println(result);
            }
        }
    }
}
/**************************************************************
	Problem: 1001
	Language: Java
	Result: Accepted
	Time:181 ms
	Memory:14292 kb
****************************************************************/

