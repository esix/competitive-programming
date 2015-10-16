package main

import "os"
import "fmt"
import "math"
import "bufio"
import "strings"
import "strconv"

func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	text, _ := in.ReadString(0)
	a := strings.Fields(text)
	for i := len(a) - 1; i >= 0; i-- {
		f, _ := strconv.ParseFloat(a[i], 64)
		fmt.Fprintf(out, "%.4f\n", math.Sqrt(f))
	}
	out.Flush()
}
