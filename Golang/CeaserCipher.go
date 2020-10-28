package main

import "fmt"

func cipher(string text, int s) string {
	result := ""
	len := len(text)

	for i := 0; len; i++ {
		char := int(text[i])
		if text.IsUpper() {
			result := result + string((char+s-65)%26+65)
		} else {

			result := result + string((char+s-97)%26+97)
		}

	}
	return result
}

func de_cipher(string text, int s) string {
	result := ""
	S := 26 - s
	len := len(text)

	for i := 0; len; i++ {
		char := int(text[i])
		if text.IsUpper() {
			result := result + string((char+S-65)%26+65)
		} else {

			result := result + string((char+S-97)%26+97)
		}

	}
	return result
}

func main() {

	var text string
	var s int
	var choice int

	fmt.Println("Enter the text: ")
	fmt.Scanln(&text)
	fmt.Println("Enter the shift: ")
	fmt.Scanln(&s)

	fmt.Println("Enter your choice: ")
	fmt.Println("1. To encrypt")
	fmt.Println("2. To decrypt")
	fmt.Scanln(&choice)

	switch choice {
	case 1:
		fmt.Println("ciphered text: " + cipher(text, s))
	case 2:
		fmt.Println("de-ciphered text: " + de_cipher(text, s))
	}
}
