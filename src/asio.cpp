// builds all boost.asio source as a separate compilation unit
#include <boost/version.hpp>

#if BOOST_VERSION >= 104610
#include <boost/asio/impl/src.hpp>
#endif

