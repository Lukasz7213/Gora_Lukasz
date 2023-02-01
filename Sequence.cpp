#include <vector>

class Sequence {
public:
  // Konstruktor przyjmujący wektor liczb jako argument
  Sequence(const std::vector<double> &elements);

  // Metoda zwracająca wektor liczb
  std::vector<double> elements() const;

private:
  // Prywatne pole wektora liczb
  std::vector<double> elements_;
};

// Implementacja konstruktora
Sequence::Sequence(const std::vector<double> &elements) : elements_{elements} {}

// Implementacja metody zwracającej wektor liczb
std::vector<double> Sequence::elements() const {
  return elements_;
}