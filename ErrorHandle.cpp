class ErrorHandle {
public:
  // Konstruktor bezargumentowy
  ErrorHandle();

  // Metoda ustawiająca opis błędu
  void SetError(const std::string &error_description);

  // Metoda zwracająca opis błędu
  std::string ErrorDescription() const;

private:
  // Prywatne pole przechowujące opis błędu
  std::string error_description_;
};

// Implementacja konstruktora
ErrorHandle::ErrorHandle() : error_description_{} {}

// Implementacja metody ustawiającej opis błędu
void ErrorHandle::SetError(const std::string &error_description) {
  error_description_ = error_description;
}

// Implementacja metody zwracającej opis błędu
std::string ErrorHandle::ErrorDescription() const {
  return error_description_;
}