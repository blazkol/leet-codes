public class ChristmasTree {
    static void solution(int rows) {
        for (int i = 0; i < rows; ++i){
            for (int j = rows - i; j > 0; j--){
              System.out.print(' ');
            }
            for (int k = 0; k < 2 * i + 1; ++k){
              System.out.print('*');
            }
            System.out.println();
          }
    }

    public static void main(String[] args) throws Exception {
      solution(10);
    }
}
