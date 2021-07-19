import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		
		int donations = 0;
		while (n-- >= 0) {
			String cmd = s.nextLine();
			String[] split = cmd.split(" ");
			if (split[0].equals("donate")) {
				donations += Integer.parseInt(split[1]);
			} else if (cmd.equals("report")) {
				System.out.println(donations);
			}
		}
	}
}
