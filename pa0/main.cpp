#include <cmath>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <iostream>

int main() {
  Eigen::Vector3f p(2, 1, 1);
  Eigen::Matrix3f rot45, trans;
  rot45 << std::cos(M_PI / 4.0), std::sin(-1 * M_PI / 4.0), 0,
      std::sin(M_PI / 4.0), std::cos(M_PI / 4.0), 0, 0, 0, 1;
  trans << 1, 0, 1, 0, 1, 2, 0, 0, 1;
  std::cout << trans * rot45 * p << std::endl;

  return 0;
}
