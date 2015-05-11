import java.io.*;
import java.util.*;

public class T1001 {

	StreamTokenizer in;
	PrintWriter out;

	public static void main(String[] args) throws IOException {
		new T1001().run();
	}
	void run() throws IOException {
		in = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
		out = new PrintWriter(new OutputStreamWriter(System.out));
		solve();
		out.flush();
	}
	
	void solve() throws IOException {
		List<Double> results = new ArrayList<Double>();
		while(in.nextToken()!= StreamTokenizer.TT_EOF) {
			results.add(Math.sqrt(in.nval));
		}
		Object[] a = results.toArray();
		for(int i = a.length-1; i>=0; i--) {
			out.printf("%f\n", (Double)a[i]);
		}
	}

}