Miscellaneous
================
Abraham JA

## Scripts

- **partial_order**: Complement of R base function `order`. Allows you
  to partially order a numeric vector. Widely used on recommendation
  engines.

``` r
Rcpp::sourceCpp("./partial_order.cpp")
## 
## > x <- c(4, 5, 1, 3, 2)
## 
## > partial_order(x, n = 3)
## [1] 3 5 4 2 1
## 
## > x[partial_order(x, n = 3)]
## [1] 1 2 3 5 4
```
