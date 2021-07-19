import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();

		while (n-- >= 0) {
			String e = s.nextLine();
			if (e.equals("1") || e.equals("4") || e.equals("78")) {
				System.out.println("+");
			} else if (e.endsWith("35")) {
				System.out.println("-");
			} else if (e.startsWith("9") && e.endsWith("4")) {
				System.out.println("*");
			} else if (e.startsWith("190")) {
				System.out.println("?");
			}
		}
	}
}
