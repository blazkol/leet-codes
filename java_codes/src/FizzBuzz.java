public class FizzBuzz {
    static void solution(int num) {
        String answer = "";
        if(num % 3 == 0) answer += "Fizz";
        if(num % 5 == 0) answer += "Buzz";
        if(num % 3 != 0 && num % 5 != 0) answer += Integer.toString(num);
        System.out.println(answer);
    }
    public static void main(String[] args) throws Exception {
        solution(3);
        solution(5);
        solution(15);
        solution(1);
    }
}
