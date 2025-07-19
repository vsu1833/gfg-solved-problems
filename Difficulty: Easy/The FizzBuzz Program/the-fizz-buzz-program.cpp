// User function Template for C++
void fizzBuzz(int number) {
    // Write your code here.
    if (number % 3 == 0 && number % 5 == 0) {
      cout << "FizzBuzz" << std::endl;
    } else if (number % 3 == 0) {
       cout << "Fizz" << std::endl;
    } else if (number % 5 == 0) {
        cout << "Buzz" << std::endl;
    } else {
       cout << number << std::endl;
    }
}