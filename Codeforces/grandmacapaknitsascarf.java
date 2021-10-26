import java.util.*;
import java.io.*;

public class grandmacapaknitsascarf {
	static boolean pallin(String s) {
		for (int i = 0; i < s.length() / 2; i++) {
			if (s.charAt(i) != s.charAt(s.length() - i - 1))
				return false;
		}
		return true;
	}
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for (int xx = 0; xx < t; xx++) {
			int n = sc.nextInt();
			String s = sc.next();
			int c = 0;
			int min = Integer.MAX_VALUE;
			for (int i = 0; i < 26; i++) {
				String p = s.replace((char) (i + 'a') + "", "");
				if (pallin(p) == true)
					c = 1;
				int tt =0;
				int x = 0;
				int y = s.length() - 1;
				int pp = 0;
				while (x < y) {
					if (s.charAt(x) == s.charAt(y)) {
						x++;
						y--;
					} else {
						if (s.charAt(x) == (char) i + 'a') {
							x++;
						}
						else if(s.charAt(y)== (char) i + 'a')
							y--;
						else
						{
							pp=1;
							break;
						}
						tt++;
					}
				}
				if(pp==0)
				min=Math.min(min, tt);
			}
			System.out.println(c==0?-1:min);
		}
		sc.close();
	}
}
