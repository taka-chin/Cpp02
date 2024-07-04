#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
 private:
  int fixedPointNum;
  static const int digits = 8;

 public:
  Fixed();
  ~Fixed();
  Fixed(const Fixed &f);
  Fixed &operator=(const Fixed &f);
  int getRawBits(void) const;
  void setRawBits(int const raw);
};

#endif
