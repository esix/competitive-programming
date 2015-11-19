package main

import (
	"fmt"
)

type User struct {
	username string
	password string
	loggedin bool
}

func main() {
	var n int
	fmt.Scanln(&n)
	users := make(map[string]*User)

	for i := 0; i < n; i++ {
		var s string
		fmt.Scan(&s)
		switch s {
		case "register":
			{
				var username, password string
				fmt.Scan(&username, &password)
				if _, userExists := users[username]; userExists {
					fmt.Println("fail: user already exists")
				} else {
					user := User{username: username, password: password, loggedin: false}
					users[username] = &user
					fmt.Println("success: new user added")
				}
			}
		case "login":
			{
				var username, password string
				fmt.Scan(&username, &password)
				if user, userExists := users[username]; userExists {
					if user.password == password {
						if !user.loggedin {
							user.loggedin = true
							fmt.Println("success: user logged in")
						} else {
							fmt.Println("fail: already logged in")
						}
					} else {
						fmt.Println("fail: incorrect password")
					}
				} else {
					fmt.Println("fail: no such user")
				}
			}
		case "logout":
			{
				var username string
				fmt.Scan(&username)
				if user, userExists := users[username]; userExists {
					if user.loggedin {
						user.loggedin = false
						fmt.Println("success: user logged out")
					} else {
						fmt.Println("fail: already logged out")
					}
				} else {
					fmt.Println("fail: no such user")
				}
			}
		}
	}
}
