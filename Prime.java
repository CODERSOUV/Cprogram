public class Prime {
    public static void main(String[] Args) {
        int n = 7;
        int flag = 0;
        for (int i = 2; i < n / 2; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            System.out.println(n + " is Prime");
        else {
            System.out.println(n + "is not prime");
        }
    }
}