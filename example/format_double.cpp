#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void format_double_rgb();
void format_double_cmy();
void format_double_cmyk();
void format_double_gray();
void format_double_hsl();
void format_double_hsv();
void format_double_yiq();
void format_double_yuv();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  std::cout<< "In this example all models use double for component" << std::endl;
  format_double_rgb();
  format_double_cmy();
  format_double_cmyk();
  format_double_gray();
  format_double_hsl();
  format_double_hsv();
  format_double_yiq();
  format_double_yuv();
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  return EXIT_SUCCESS;
 }

void format_double_rgb()
 {
  ::color::rgb< double > r; //!< Make an instance

  ::color::make::orange( r ); //!< Fill with some useful information

  std::cout<< "Orange in color::rgb<double> = { ";
  std::cout<< std::setw(12) << std::right << r[0] << ","
           << std::setw(12) << std::right << r[1] << ","
           << std::setw(12) << std::right << r[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_double_cmy()
 {
  ::color::cmy< double > c; //!< Make an instance

  ::color::make::orange( c ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<double> = { ";
  std::cout<< std::setw(12) << std::right << c[0] << ","
           << std::setw(12) << std::right << c[1] << ","
           << std::setw(12) << std::right << c[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_double_cmyk()
 {
  ::color::cmyk< double > ck; //!< Make an instance

  ::color::make::orange( ck ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<double> = { ";
  std::cout<< std::setw(12) << std::right << ck[0] << ","
           << std::setw(12) << std::right << ck[1] << ","
           << std::setw(12) << std::right << ck[2] << ","
           << std::setw(12) << std::right << ck[3];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_double_gray()
 {
  ::color::gray< double > g; //!< Make an instance

  ::color::make::orange( g ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<double> = { ";
  std::cout<< std::setw(12) << std::right << g[0];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_double_hsl()
 {
  ::color::hsl< double > hl; //!< Make an instance

  ::color::make::orange( hl ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<double> = { ";
  std::cout<< std::setw(12) << std::right << hl[0] << ","
           << std::setw(12) << std::right << hl[1] << ","
           << std::setw(12) << std::right << hl[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_double_hsv()
 {
  ::color::hsv< double > hv; //!< Make an instance

  ::color::make::orange( hv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<double> = { ";
  std::cout<< std::setw(12) << std::right << hv[0] << ","
           << std::setw(12) << std::right << hv[1] << ","
           << std::setw(12) << std::right << hv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_double_yiq()
 {
  ::color::yiq< double > yq; //!< Make an instance

  ::color::make::orange( yq ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<double> = { ";
  std::cout<< std::setw(12) << std::right << yq[0] << ","
           << std::setw(12) << std::right << yq[1] << ","
           << std::setw(12) << std::right << yq[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

void format_double_yuv()
 {
  ::color::yuv< double > yv; //!< Make an instance

  ::color::make::orange( yv ); //!< Fill with some useful information

  std::cout<< "Orange in color::cmy<double> = { ";
  std::cout<< std::setw(12) << std::right << yv[0] << ","
           << std::setw(12) << std::right << yv[1] << ","
           << std::setw(12) << std::right << yv[2];
  std::cout<< " };";
  std::cout<< std::endl;
 }

