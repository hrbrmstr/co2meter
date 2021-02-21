
[![Project Status: Active – The project has reached a stable, usable
state and is being actively
developed.](https://www.repostatus.org/badges/latest/active.svg)](https://www.repostatus.org/#active)
[![Signed
by](https://img.shields.io/badge/Keybase-Verified-brightgreen.svg)](https://keybase.io/hrbrmstr)
![Signed commit
%](https://img.shields.io/badge/Signed_Commits-100%25-lightgrey.svg)
[![Linux build
Status](https://travis-ci.org/hrbrmstr/co2meter.svg?branch=master)](https://travis-ci.org/hrbrmstr/co2meter)  
![Minimal R
Version](https://img.shields.io/badge/R%3E%3D-3.6.0-blue.svg)
![License](https://img.shields.io/badge/License-GPL-3-blue.svg)

# co2meter

Retrieve Readings from CO2Mini (Model RAD-0301) Desktop CO2 Monitor

## Description

The CO2Mini (model RAD-0301) desktop CO2 monitor from CO2meter.com is a
low-cost, fairly accurate personal CO2 environment monitor that can work
standalone (via a USB power brick) or be attacked to a computer where it
can be both powered and act as a datalogger. Tools are provided to
retrieve temperature and CO2 readings from such devices.

### NOTE

For the moment, this is hard-wired for macOS. File an issue if you want
linux support. For Windows users, please use a better operating system.

## What’s Inside The Tin

The following functions are implemented:

-   `read_co2`: Initialize, read from, and close a co2meter.com device

## Installation

``` r
remotes::install_git("https://git.rud.is/hrbrmstr/co2meter.git")
# or
remotes::install_gitlab("hrbrmstr/co2meter")
# or
remotes::install_bitbucket("hrbrmstr/co2meter")
# or
remotes::install_github("hrbrmstr/co2meter")
```

NOTE: To use the ‘remotes’ install options you will need to have the
[{remotes} package](https://github.com/r-lib/remotes) installed.

## Usage

``` r
library(co2meter)

# current version
packageVersion("co2")
## [1] '0.1.0'
```

``` r
init_co2_meter_dev()

print(read_co2()) # this can take a few seconds
## $temp
## [1] 20.475
## 
## $co2
## [1] 667

print(read_co2()) # this can take a few seconds
## $temp
## [1] 20.475
## 
## $co2
## [1] 667

print(read_co2()) # this can take a few seconds
## $temp
## [1] 20.475
## 
## $co2
## [1] 668

close_dev()
```

## co2 Metrics

| Lang         | \# Files |  (%) |  LoC |  (%) | Blank lines |  (%) | \# Lines |  (%) |
|:-------------|---------:|-----:|-----:|-----:|------------:|-----:|---------:|-----:|
| C            |        3 | 0.15 | 1116 | 0.45 |         300 | 0.33 |      221 | 0.17 |
| C/C++ Header |        3 | 0.15 |  104 | 0.04 |         123 | 0.14 |      354 | 0.28 |
| R            |        3 | 0.15 |   13 | 0.01 |           4 | 0.00 |       26 | 0.02 |
| Rmd          |        1 | 0.05 |   13 | 0.01 |          22 | 0.02 |       32 | 0.03 |
| SUM          |       10 | 0.50 | 1246 | 0.50 |         449 | 0.50 |      633 | 0.50 |

clock Package Metrics for co2meter

## Code of Conduct

Please note that this project is released with a Contributor Code of
Conduct. By participating in this project you agree to abide by its
terms.
