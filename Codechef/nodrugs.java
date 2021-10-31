/* package codechef; // don't place package name! */

import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
  public static void main(String[] args) throws java.lang.Exception {
    Scanner s = new Scanner(System.in);
    int t = s.nextInt();

    while (t-- > 0) {
      int n = s.nextInt();
      int k = s.nextInt();
      int l = s.nextInt();

      int max_speed = 0, tie = 0;
      int[] a = new int[n];
      for (int i = 0; i < n; ++i) {
        a[i] = s.nextInt();
        if (a[i] > max_speed) {
          max_speed = a[i];
          tie = 0;
        } else if (a[i] == max_speed) {
          tie++;
        }
      }

      if (a[n - 1] == max_speed) {
        if (tie == 0) {
          System.out.println("Yes");
          continue;
        }
      }

      if (k <= 0) {
        System.out.println("No");
        continue;
      }

      int increase = max_speed - a[n - 1] + 1;
      int dose = 1;
      if (increase % k > 0) {
        dose = 1;
      } else {
        dose = 0;
      }

      dose += increase / k;
      if (dose >= l) {
        System.out.println("No");
      } else {
        System.out.println("Yes");
      }

    }

    s.close();
  }
}
