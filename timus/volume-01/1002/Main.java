import java.io.*;
import java.util.*;

public class Main {

	public static void main(String[] args) throws IOException {
		new Main().run();
	}

	BufferedReader in;
	PrintWriter out;

	void run() throws IOException {
		boolean oj = System.getProperty("ONLINE_JUDGE") != null;
		//oj=true;
		in = oj ? new BufferedReader(new InputStreamReader(System.in)) : new BufferedReader(new FileReader("input.txt"));
		out = new PrintWriter(new OutputStreamWriter(System.out));
		solve();
		out.flush();
	}
	/*
	public class StringLengthComparator implements Comparator<String> {
		  public int compare(String o1, String o2) {
		    if (o1.length() < o2.length()) {
		      return 1;
		    } else if (o1.length() > o2.length()) {
		      return -1;
		    } else {
		      return o1.compareToIgnoreCase(o2);
		    }
		  }
	}
	*/
	/*
    1 ij    2 abc   3 def
    4 gh    5 kl    6 mn
    7 prs   8 tuv   9 wxy
            0 oqz
	 */

	String word2Number(String word){
		return ( word.replace('i', '1').replace('j','1').
				replace('a','2').replace('b','2').replace('c', '2').
				replace('d','3').replace('e', '3').replace('f', '3').
				replace('g','4').replace('h','4').
				replace('k','5').replace('l','5').
				replace('m','6').replace('n','6').
				replace('p','7').replace('r','7').replace('s','7').
				replace('t','8').replace('u','8').replace('v','8').
				replace('w','9').replace('x','9').replace('y','9').
				replace('o','0').replace('q','0').replace('z','0')
				);
	}

	Map<String, String> words;
	Map<String, String> solutions;

	void solve() throws IOException{
		while(in.ready()) {
		//while(true){
			String telephone = in.readLine();
			if(telephone.equals("-1"))
				break;
			int numWords = Integer.parseInt(in.readLine());

			// init words
			words = new HashMap<String,String>();		//new StringLengthComparator());
			solutions = new HashMap<String, String>();

			for(int i = 0; i < numWords; i++){
				String word = in.readLine();
				String t = word2Number(word);
				if(telephone.indexOf(t) >= 0)
					words.put(t, word);						// convert word
			}

			String solution = findSolution(telephone);
			if(solution.length() > 0)
				out.println(solution);
			else
				out.println("No solution.");
		}
	}

	String findSolution(String telephone){
		// words is backward sorted, so find largest strings first
		if(solutions.containsKey(telephone))
			return solutions.get(telephone);

		String result = "";
		for (Map.Entry<String, String> entry: words.entrySet()) {
		    String t = entry.getKey();
		    String word = entry.getValue();

			if(telephone.indexOf(t) != 0) continue;				// searching word at the beginning

			String tEnd = telephone.substring(t.length());

			if(tEnd.length() == 0) {
				solutions.put(telephone, word);
				return word;				// one word is always best solution
			}

			String wEnd = findSolution(tEnd);
			if(wEnd.length() == 0) continue;	// did not find a solution for string ending

			if(result.length() == 0 || result.length() > (word.length()+1+wEnd.length()) )
				result = word + " " + wEnd;
		}
		solutions.put(telephone, result);
		return result;
	}
}
