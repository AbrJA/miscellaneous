#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
IntegerVector partial_order(NumericVector x, int n) {
  IntegerVector y(x.size());
  std::iota(y.begin(), y.end(), 0);
  std::partial_sort(y.begin(), y.begin() + n, y.end(),
                    [&](int i, int j) {
                      return x[i] < x[j];
                    });
  return y + 1;
}

/*** R
x <- c(4, 5, 1, 3, 2)
partial_order(x, n = 3)
x[partial_order(x, n = 3)]
*/
