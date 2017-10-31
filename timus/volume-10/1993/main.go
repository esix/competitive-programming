package main

import (
	"bufio"
	"fmt"
	"os"
	"regexp"
)

func make_upper(s string) string {
	if 'a' <= s[0] && s[0] <= 'z' {
		return string(s[0]-'a'+'A') + s[1:]
	}
	return s
}

func make_lower(s string) string {
	if 'A' <= s[0] && s[0] <= 'Z' {
		return string(s[0]-'A'+'a') + s[1:]
	}
	return s
}

func main() {
	bi := bufio.NewReader(os.Stdin)
	bo := bufio.NewWriter(os.Stdout)
	defer bo.Flush()

	s, _ := bi.ReadString('\n')
	re := regexp.MustCompile("\\((\\w|\\s)+\\)|\\{(\\w|\\s)+\\}|\\[(\\w|\\s)+\\]")

	rr := re.FindAllStringSubmatchIndex(s, -1)
	words := re.FindAllString(s, -1)

	for i := 0; i < len(words)-1; i++ {
		for j := i; j < len(words); j++ {
			if i%3 == 0 && words[j][0] == '{' {
				words[i], words[j] = words[j], words[i]
				break
			}
			if i%3 == 1 && words[j][0] == '(' {
				words[i], words[j] = words[j], words[i]
				break
			}
			if i%3 == 2 && words[j][0] == '[' {
				words[i], words[j] = words[j], words[i]
				break
			}
		}
	}

	j := 0
	res := ""

	for i := 0; i < len(s); i++ {
		if j < len(rr) && rr[j][0] == i {
			i = rr[j][1] - 1
			w := words[j][1 : len(words[j])-1]
			if j == 0 {
				res += make_upper(w)
			} else {
				res += make_lower(w)
			}
			j++
		} else {
			res += string(s[i])
		}
	}
	fmt.Fprint(bo, res)
}
