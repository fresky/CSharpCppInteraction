namespace ManagedCalculator
{
    // Interface declaration.
    public interface ICalculator
    {
        int Add(int number1, int number2);
    };

    // Interface implementation.
    public class ManagedCalculator : ICalculator
    {
        public int Add(int number1, int number2)
        {
            return number1 + number2;
        }
    }
}