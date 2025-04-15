def fizz_buzz(num):
    answer = ""
    if num % 3 == 0:
        answer = answer + "Fizz"
    if num % 5 == 0:
        answer = answer + "Buzz"
    if num % 3 != 0 and num % 5 != 0:
        answer = answer + str(num)
    print(answer)

        

if __name__ == "__main__":
    fizz_buzz(3)
    fizz_buzz(5)
    fizz_buzz(15)
    fizz_buzz(1)