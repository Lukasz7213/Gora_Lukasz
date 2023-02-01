#include <vector>

class Sequence;

class Statistics {
public:
  // Konstruktor przyjmujący obiekt klasy Sequence jako argument
  Statistics(const Sequence &sequence);

  // Metoda zwracająca średnią
  double Mean() const;

  // Metoda zwracająca medianę
  double Median() const;

  // Metoda zwracająca wariancję
  double Variance() const;

private:
  // Prywatne pole przechowujące obiekt klasy Sequence
  const Sequence &sequence_;
};

// Implementacja konstruktora
Statistics::Statistics(const Sequence &sequence) : sequence_{sequence} {}

// Implementacja metody zwracającej średnią
double Statistics::Mean() const {
  // TODO: Implementacja obliczania średniej
  return 0.0;
}

// Implementacja metody zwracającej medianę
double Statistics::Median() const {
  // TODO: Implementacja obliczania mediany
  return 0.0;
}

// Implementacja metody zwracającej wariancję
double Statistics::Variance() const {
  // TODO: Implementacja obliczania wariancji
  return 0.0;
}
