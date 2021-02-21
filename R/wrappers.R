#' Initialize, read from, and close a co2meter.com device
#'
#' @return [get_readings()] returns a named list containing ambient temperature (°C) and CO2 (ppm)
#' @export
#' @examples \dontrun{
#' init_co2_meter_dev()
#' read_co2()
#' close_dev()
#' }
read_co2 <- function() {
  .Call("int_get_readings")
}

#' @rdname read_co2
#' @export
close_dev <- function() {
  tmp <- .Call("int_close_dev")
}

#' @rdname read_co2
#' @export
init_co2_meter_dev <- function() {
  tmp <- .Call("int_init_dev")
}
