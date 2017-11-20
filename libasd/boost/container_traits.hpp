#ifndef LIBASD_BOOST_CONTAINER_DISPATCHER_H
#define LIBASD_BOOST_CONTAINER_DISPATCHER_H

#include <libasd/container_traits.hpp>
#include <boost/container/vector.hpp>
#include <boost/container/static_vector.hpp>
#include <boost/container/small_vector.hpp>
#include <boost/container/deque.hpp>
#include <boost/array.hpp>

namespace asd
{

template<typename T, typename Alloc>
struct container_traits<boost::container::vector<T, Alloc>>
{
    using ptr_accessibility = std::true_type;
};
template<typename T, std::size_t N>
struct container_traits<boost::container::static_vector<T, N>>
{
    using ptr_accessibility = std::true_type;
};
template<typename T, std::size_t N, typename Alloc>
struct container_traits<boost::container::small_vector<T, N, Alloc>>
{
    using ptr_accessibility = std::true_type;
};
template<typename T, std::size_t N>
struct container_traits<boost::array<T, N>>
{
    using ptr_accessibility = std::true_type;
};

} // asd
#endif//LIBASD_BOOST_CONTAINER_DISPATCHER_H
