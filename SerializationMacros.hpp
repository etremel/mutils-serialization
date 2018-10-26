#pragma once
#include "../mutils/macro_utils.hpp"

/**
 * This is an automatically-generated file that implements default serialization
 * support with a series of macros. Do not edit this file by hand; you should
 * generate it with generate_macros.py. The public interface is at the bottom of
 * the file.
 */

#define DEFAULT_SERIALIZE1(a) std::size_t to_bytes(char* ret) const { \
        return mutils::to_bytes(a, ret); \
    } \
    std::size_t bytes_size() const { \
        return mutils::bytes_size(a) ; \
    } \
    void post_object(const std::function<void (char const * const, std::size_t)>& func ) const { \
        mutils::post_object(func,a); \
    } 

#define DEFAULT_SERIALIZE2(a,b) std::size_t to_bytes(char* ret) const { \
        int bytes_written = mutils::to_bytes(a,ret);  \
        return bytes_written + mutils::to_bytes(b,ret + bytes_written); \
    } \
    std::size_t bytes_size() const { \
        return mutils::bytes_size(a) + mutils::bytes_size(b) ; \
    } \
    void post_object(const std::function<void (char const * const, std::size_t)>& func ) const { \
        mutils::post_object(func,a); \
        mutils::post_object(func,b); \
    } 

#define DEFAULT_SERIALIZE3(a,b,c) std::size_t to_bytes(char* ret) const { \
        int bytes_written = mutils::to_bytes(a,ret);  \
        bytes_written += mutils::to_bytes(b,ret + bytes_written); \
        return bytes_written + mutils::to_bytes(c,ret + bytes_written); \
    } \
    std::size_t bytes_size() const { \
        return mutils::bytes_size(a) + mutils::bytes_size(b) + mutils::bytes_size(c) ; \
    } \
    void post_object(const std::function<void (char const * const, std::size_t)>& func ) const { \
        mutils::post_object(func,a); \
        mutils::post_object(func,b); \
        mutils::post_object(func,c); \
    } 

#define DEFAULT_SERIALIZE4(a,b,c,d) std::size_t to_bytes(char* ret) const { \
        int bytes_written = mutils::to_bytes(a,ret);  \
        bytes_written += mutils::to_bytes(b,ret + bytes_written); \
        bytes_written += mutils::to_bytes(c,ret + bytes_written); \
        return bytes_written + mutils::to_bytes(d,ret + bytes_written); \
    } \
    std::size_t bytes_size() const { \
        return mutils::bytes_size(a) + mutils::bytes_size(b) + mutils::bytes_size(c) + mutils::bytes_size(d) ; \
    } \
    void post_object(const std::function<void (char const * const, std::size_t)>& func ) const { \
        mutils::post_object(func,a); \
        mutils::post_object(func,b); \
        mutils::post_object(func,c); \
        mutils::post_object(func,d); \
    } 

#define DEFAULT_SERIALIZE5(a,b,c,d,e) std::size_t to_bytes(char* ret) const { \
        int bytes_written = mutils::to_bytes(a,ret);  \
        bytes_written += mutils::to_bytes(b,ret + bytes_written); \
        bytes_written += mutils::to_bytes(c,ret + bytes_written); \
        bytes_written += mutils::to_bytes(d,ret + bytes_written); \
        return bytes_written + mutils::to_bytes(e,ret + bytes_written); \
    } \
    std::size_t bytes_size() const { \
        return mutils::bytes_size(a) + mutils::bytes_size(b) + mutils::bytes_size(c) + mutils::bytes_size(d) + mutils::bytes_size(e) ; \
    } \
    void post_object(const std::function<void (char const * const, std::size_t)>& func ) const { \
        mutils::post_object(func,a); \
        mutils::post_object(func,b); \
        mutils::post_object(func,c); \
        mutils::post_object(func,d); \
        mutils::post_object(func,e); \
    } 

#define DEFAULT_SERIALIZE6(a,b,c,d,e,f) std::size_t to_bytes(char* ret) const { \
        int bytes_written = mutils::to_bytes(a,ret);  \
        bytes_written += mutils::to_bytes(b,ret + bytes_written); \
        bytes_written += mutils::to_bytes(c,ret + bytes_written); \
        bytes_written += mutils::to_bytes(d,ret + bytes_written); \
        bytes_written += mutils::to_bytes(e,ret + bytes_written); \
        return bytes_written + mutils::to_bytes(f,ret + bytes_written); \
    } \
    std::size_t bytes_size() const { \
        return mutils::bytes_size(a) + mutils::bytes_size(b) + mutils::bytes_size(c) + mutils::bytes_size(d) + mutils::bytes_size(e) + mutils::bytes_size(f) ; \
    } \
    void post_object(const std::function<void (char const * const, std::size_t)>& func ) const { \
        mutils::post_object(func,a); \
        mutils::post_object(func,b); \
        mutils::post_object(func,c); \
        mutils::post_object(func,d); \
        mutils::post_object(func,e); \
        mutils::post_object(func,f); \
    } 

#define DEFAULT_SERIALIZE7(a,b,c,d,e,f,g) std::size_t to_bytes(char* ret) const { \
        int bytes_written = mutils::to_bytes(a,ret);  \
        bytes_written += mutils::to_bytes(b,ret + bytes_written); \
        bytes_written += mutils::to_bytes(c,ret + bytes_written); \
        bytes_written += mutils::to_bytes(d,ret + bytes_written); \
        bytes_written += mutils::to_bytes(e,ret + bytes_written); \
        bytes_written += mutils::to_bytes(f,ret + bytes_written); \
        return bytes_written + mutils::to_bytes(g,ret + bytes_written); \
    } \
    std::size_t bytes_size() const { \
        return mutils::bytes_size(a) + mutils::bytes_size(b) + mutils::bytes_size(c) + mutils::bytes_size(d) + mutils::bytes_size(e) + mutils::bytes_size(f) + mutils::bytes_size(g) ; \
    } \
    void post_object(const std::function<void (char const * const, std::size_t)>& func ) const { \
        mutils::post_object(func,a); \
        mutils::post_object(func,b); \
        mutils::post_object(func,c); \
        mutils::post_object(func,d); \
        mutils::post_object(func,e); \
        mutils::post_object(func,f); \
        mutils::post_object(func,g); \
    } 

#define DEFAULT_SERIALIZE8(a,b,c,d,e,f,g,h) std::size_t to_bytes(char* ret) const { \
        int bytes_written = mutils::to_bytes(a,ret);  \
        bytes_written += mutils::to_bytes(b,ret + bytes_written); \
        bytes_written += mutils::to_bytes(c,ret + bytes_written); \
        bytes_written += mutils::to_bytes(d,ret + bytes_written); \
        bytes_written += mutils::to_bytes(e,ret + bytes_written); \
        bytes_written += mutils::to_bytes(f,ret + bytes_written); \
        bytes_written += mutils::to_bytes(g,ret + bytes_written); \
        return bytes_written + mutils::to_bytes(h,ret + bytes_written); \
    } \
    std::size_t bytes_size() const { \
        return mutils::bytes_size(a) + mutils::bytes_size(b) + mutils::bytes_size(c) + mutils::bytes_size(d) + mutils::bytes_size(e) + mutils::bytes_size(f) + mutils::bytes_size(g) + mutils::bytes_size(h) ; \
    } \
    void post_object(const std::function<void (char const * const, std::size_t)>& func ) const { \
        mutils::post_object(func,a); \
        mutils::post_object(func,b); \
        mutils::post_object(func,c); \
        mutils::post_object(func,d); \
        mutils::post_object(func,e); \
        mutils::post_object(func,f); \
        mutils::post_object(func,g); \
        mutils::post_object(func,h); \
    } 

#define DEFAULT_SERIALIZE9(a,b,c,d,e,f,g,h,i) std::size_t to_bytes(char* ret) const { \
        int bytes_written = mutils::to_bytes(a,ret);  \
        bytes_written += mutils::to_bytes(b,ret + bytes_written); \
        bytes_written += mutils::to_bytes(c,ret + bytes_written); \
        bytes_written += mutils::to_bytes(d,ret + bytes_written); \
        bytes_written += mutils::to_bytes(e,ret + bytes_written); \
        bytes_written += mutils::to_bytes(f,ret + bytes_written); \
        bytes_written += mutils::to_bytes(g,ret + bytes_written); \
        bytes_written += mutils::to_bytes(h,ret + bytes_written); \
        return bytes_written + mutils::to_bytes(i,ret + bytes_written); \
    } \
    std::size_t bytes_size() const { \
        return mutils::bytes_size(a) + mutils::bytes_size(b) + mutils::bytes_size(c) + mutils::bytes_size(d) + mutils::bytes_size(e) + mutils::bytes_size(f) + mutils::bytes_size(g) + mutils::bytes_size(h) + mutils::bytes_size(i) ; \
    } \
    void post_object(const std::function<void (char const * const, std::size_t)>& func ) const { \
        mutils::post_object(func,a); \
        mutils::post_object(func,b); \
        mutils::post_object(func,c); \
        mutils::post_object(func,d); \
        mutils::post_object(func,e); \
        mutils::post_object(func,f); \
        mutils::post_object(func,g); \
        mutils::post_object(func,h); \
        mutils::post_object(func,i); \
    } 

#define DEFAULT_SERIALIZE10(a,b,c,d,e,f,g,h,i,j) std::size_t to_bytes(char* ret) const { \
        int bytes_written = mutils::to_bytes(a,ret);  \
        bytes_written += mutils::to_bytes(b,ret + bytes_written); \
        bytes_written += mutils::to_bytes(c,ret + bytes_written); \
        bytes_written += mutils::to_bytes(d,ret + bytes_written); \
        bytes_written += mutils::to_bytes(e,ret + bytes_written); \
        bytes_written += mutils::to_bytes(f,ret + bytes_written); \
        bytes_written += mutils::to_bytes(g,ret + bytes_written); \
        bytes_written += mutils::to_bytes(h,ret + bytes_written); \
        bytes_written += mutils::to_bytes(i,ret + bytes_written); \
        return bytes_written + mutils::to_bytes(j,ret + bytes_written); \
    } \
    std::size_t bytes_size() const { \
        return mutils::bytes_size(a) + mutils::bytes_size(b) + mutils::bytes_size(c) + mutils::bytes_size(d) + mutils::bytes_size(e) + mutils::bytes_size(f) + mutils::bytes_size(g) + mutils::bytes_size(h) + mutils::bytes_size(i) + mutils::bytes_size(j) ; \
    } \
    void post_object(const std::function<void (char const * const, std::size_t)>& func ) const { \
        mutils::post_object(func,a); \
        mutils::post_object(func,b); \
        mutils::post_object(func,c); \
        mutils::post_object(func,d); \
        mutils::post_object(func,e); \
        mutils::post_object(func,f); \
        mutils::post_object(func,g); \
        mutils::post_object(func,h); \
        mutils::post_object(func,i); \
        mutils::post_object(func,j); \
    } 

#define DEFAULT_SERIALIZE11(a,b,c,d,e,f,g,h,i,j,k) std::size_t to_bytes(char* ret) const { \
        int bytes_written = mutils::to_bytes(a,ret);  \
        bytes_written += mutils::to_bytes(b,ret + bytes_written); \
        bytes_written += mutils::to_bytes(c,ret + bytes_written); \
        bytes_written += mutils::to_bytes(d,ret + bytes_written); \
        bytes_written += mutils::to_bytes(e,ret + bytes_written); \
        bytes_written += mutils::to_bytes(f,ret + bytes_written); \
        bytes_written += mutils::to_bytes(g,ret + bytes_written); \
        bytes_written += mutils::to_bytes(h,ret + bytes_written); \
        bytes_written += mutils::to_bytes(i,ret + bytes_written); \
        bytes_written += mutils::to_bytes(j,ret + bytes_written); \
        return bytes_written + mutils::to_bytes(k,ret + bytes_written); \
    } \
    std::size_t bytes_size() const { \
        return mutils::bytes_size(a) + mutils::bytes_size(b) + mutils::bytes_size(c) + mutils::bytes_size(d) + mutils::bytes_size(e) + mutils::bytes_size(f) + mutils::bytes_size(g) + mutils::bytes_size(h) + mutils::bytes_size(i) + mutils::bytes_size(j) + mutils::bytes_size(k) ; \
    } \
    void post_object(const std::function<void (char const * const, std::size_t)>& func ) const { \
        mutils::post_object(func,a); \
        mutils::post_object(func,b); \
        mutils::post_object(func,c); \
        mutils::post_object(func,d); \
        mutils::post_object(func,e); \
        mutils::post_object(func,f); \
        mutils::post_object(func,g); \
        mutils::post_object(func,h); \
        mutils::post_object(func,i); \
        mutils::post_object(func,j); \
        mutils::post_object(func,k); \
    } 

#define DEFAULT_DESERIALIZE2(Name,a) \
    static std::unique_ptr<Name> from_bytes(mutils::DeserializationManager* dsm, char const * buf){ \
        auto a_obj = mutils::from_bytes<std::decay_t<decltype(a)> >(dsm, buf); \
        return std::make_unique<Name>(*a_obj); \
    } 

#define DEFAULT_DESERIALIZE3(Name,a,b) \
    static std::unique_ptr<Name> from_bytes(mutils::DeserializationManager* dsm, char const * buf){ \
        auto a_obj = mutils::from_bytes<std::decay_t<decltype(a)> >(dsm, buf); \
        return std::make_unique<Name>(*a_obj, *(mutils::from_bytes<std::decay_t<decltype(b)> >(dsm, buf + mutils::bytes_size(*a_obj)))); \
    } 

#define DEFAULT_DESERIALIZE4(Name,a,b,c) \
    static std::unique_ptr<Name> from_bytes(mutils::DeserializationManager* dsm, char const * buf){ \
        auto a_obj = mutils::from_bytes<std::decay_t<decltype(a)> >(dsm, buf); \
        std::size_t bytes_read = mutils::bytes_size(*a_obj); \
        auto b_obj = mutils::from_bytes<std::decay_t<decltype(b)> >(dsm, buf + bytes_read); \
        return std::make_unique<Name>(*a_obj,*b_obj, *(mutils::from_bytes<std::decay_t<decltype(c)> >(dsm, buf + bytes_read + mutils::bytes_size(*b_obj)))); \
    } 

#define DEFAULT_DESERIALIZE5(Name,a,b,c,d) \
    static std::unique_ptr<Name> from_bytes(mutils::DeserializationManager* dsm, char const * buf){ \
        auto a_obj = mutils::from_bytes<std::decay_t<decltype(a)> >(dsm, buf); \
        std::size_t bytes_read = mutils::bytes_size(*a_obj); \
        auto b_obj = mutils::from_bytes<std::decay_t<decltype(b)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*b_obj); \
        auto c_obj = mutils::from_bytes<std::decay_t<decltype(c)> >(dsm, buf + bytes_read); \
        return std::make_unique<Name>(*a_obj,*b_obj,*c_obj, *(mutils::from_bytes<std::decay_t<decltype(d)> >(dsm, buf + bytes_read + mutils::bytes_size(*c_obj)))); \
    } 

#define DEFAULT_DESERIALIZE6(Name,a,b,c,d,e) \
    static std::unique_ptr<Name> from_bytes(mutils::DeserializationManager* dsm, char const * buf){ \
        auto a_obj = mutils::from_bytes<std::decay_t<decltype(a)> >(dsm, buf); \
        std::size_t bytes_read = mutils::bytes_size(*a_obj); \
        auto b_obj = mutils::from_bytes<std::decay_t<decltype(b)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*b_obj); \
        auto c_obj = mutils::from_bytes<std::decay_t<decltype(c)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*c_obj); \
        auto d_obj = mutils::from_bytes<std::decay_t<decltype(d)> >(dsm, buf + bytes_read); \
        return std::make_unique<Name>(*a_obj,*b_obj,*c_obj,*d_obj, *(mutils::from_bytes<std::decay_t<decltype(e)> >(dsm, buf + bytes_read + mutils::bytes_size(*d_obj)))); \
    } 

#define DEFAULT_DESERIALIZE7(Name,a,b,c,d,e,f) \
    static std::unique_ptr<Name> from_bytes(mutils::DeserializationManager* dsm, char const * buf){ \
        auto a_obj = mutils::from_bytes<std::decay_t<decltype(a)> >(dsm, buf); \
        std::size_t bytes_read = mutils::bytes_size(*a_obj); \
        auto b_obj = mutils::from_bytes<std::decay_t<decltype(b)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*b_obj); \
        auto c_obj = mutils::from_bytes<std::decay_t<decltype(c)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*c_obj); \
        auto d_obj = mutils::from_bytes<std::decay_t<decltype(d)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*d_obj); \
        auto e_obj = mutils::from_bytes<std::decay_t<decltype(e)> >(dsm, buf + bytes_read); \
        return std::make_unique<Name>(*a_obj,*b_obj,*c_obj,*d_obj,*e_obj, *(mutils::from_bytes<std::decay_t<decltype(f)> >(dsm, buf + bytes_read + mutils::bytes_size(*e_obj)))); \
    } 

#define DEFAULT_DESERIALIZE8(Name,a,b,c,d,e,f,g) \
    static std::unique_ptr<Name> from_bytes(mutils::DeserializationManager* dsm, char const * buf){ \
        auto a_obj = mutils::from_bytes<std::decay_t<decltype(a)> >(dsm, buf); \
        std::size_t bytes_read = mutils::bytes_size(*a_obj); \
        auto b_obj = mutils::from_bytes<std::decay_t<decltype(b)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*b_obj); \
        auto c_obj = mutils::from_bytes<std::decay_t<decltype(c)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*c_obj); \
        auto d_obj = mutils::from_bytes<std::decay_t<decltype(d)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*d_obj); \
        auto e_obj = mutils::from_bytes<std::decay_t<decltype(e)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*e_obj); \
        auto f_obj = mutils::from_bytes<std::decay_t<decltype(f)> >(dsm, buf + bytes_read); \
        return std::make_unique<Name>(*a_obj,*b_obj,*c_obj,*d_obj,*e_obj,*f_obj, *(mutils::from_bytes<std::decay_t<decltype(g)> >(dsm, buf + bytes_read + mutils::bytes_size(*f_obj)))); \
    } 

#define DEFAULT_DESERIALIZE9(Name,a,b,c,d,e,f,g,h) \
    static std::unique_ptr<Name> from_bytes(mutils::DeserializationManager* dsm, char const * buf){ \
        auto a_obj = mutils::from_bytes<std::decay_t<decltype(a)> >(dsm, buf); \
        std::size_t bytes_read = mutils::bytes_size(*a_obj); \
        auto b_obj = mutils::from_bytes<std::decay_t<decltype(b)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*b_obj); \
        auto c_obj = mutils::from_bytes<std::decay_t<decltype(c)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*c_obj); \
        auto d_obj = mutils::from_bytes<std::decay_t<decltype(d)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*d_obj); \
        auto e_obj = mutils::from_bytes<std::decay_t<decltype(e)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*e_obj); \
        auto f_obj = mutils::from_bytes<std::decay_t<decltype(f)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*f_obj); \
        auto g_obj = mutils::from_bytes<std::decay_t<decltype(g)> >(dsm, buf + bytes_read); \
        return std::make_unique<Name>(*a_obj,*b_obj,*c_obj,*d_obj,*e_obj,*f_obj,*g_obj, *(mutils::from_bytes<std::decay_t<decltype(h)> >(dsm, buf + bytes_read + mutils::bytes_size(*g_obj)))); \
    } 

#define DEFAULT_DESERIALIZE10(Name,a,b,c,d,e,f,g,h,i) \
    static std::unique_ptr<Name> from_bytes(mutils::DeserializationManager* dsm, char const * buf){ \
        auto a_obj = mutils::from_bytes<std::decay_t<decltype(a)> >(dsm, buf); \
        std::size_t bytes_read = mutils::bytes_size(*a_obj); \
        auto b_obj = mutils::from_bytes<std::decay_t<decltype(b)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*b_obj); \
        auto c_obj = mutils::from_bytes<std::decay_t<decltype(c)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*c_obj); \
        auto d_obj = mutils::from_bytes<std::decay_t<decltype(d)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*d_obj); \
        auto e_obj = mutils::from_bytes<std::decay_t<decltype(e)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*e_obj); \
        auto f_obj = mutils::from_bytes<std::decay_t<decltype(f)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*f_obj); \
        auto g_obj = mutils::from_bytes<std::decay_t<decltype(g)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*g_obj); \
        auto h_obj = mutils::from_bytes<std::decay_t<decltype(h)> >(dsm, buf + bytes_read); \
        return std::make_unique<Name>(*a_obj,*b_obj,*c_obj,*d_obj,*e_obj,*f_obj,*g_obj,*h_obj, *(mutils::from_bytes<std::decay_t<decltype(i)> >(dsm, buf + bytes_read + mutils::bytes_size(*h_obj)))); \
    } 

#define DEFAULT_DESERIALIZE11(Name,a,b,c,d,e,f,g,h,i,j) \
    static std::unique_ptr<Name> from_bytes(mutils::DeserializationManager* dsm, char const * buf){ \
        auto a_obj = mutils::from_bytes<std::decay_t<decltype(a)> >(dsm, buf); \
        std::size_t bytes_read = mutils::bytes_size(*a_obj); \
        auto b_obj = mutils::from_bytes<std::decay_t<decltype(b)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*b_obj); \
        auto c_obj = mutils::from_bytes<std::decay_t<decltype(c)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*c_obj); \
        auto d_obj = mutils::from_bytes<std::decay_t<decltype(d)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*d_obj); \
        auto e_obj = mutils::from_bytes<std::decay_t<decltype(e)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*e_obj); \
        auto f_obj = mutils::from_bytes<std::decay_t<decltype(f)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*f_obj); \
        auto g_obj = mutils::from_bytes<std::decay_t<decltype(g)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*g_obj); \
        auto h_obj = mutils::from_bytes<std::decay_t<decltype(h)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*h_obj); \
        auto i_obj = mutils::from_bytes<std::decay_t<decltype(i)> >(dsm, buf + bytes_read); \
        return std::make_unique<Name>(*a_obj,*b_obj,*c_obj,*d_obj,*e_obj,*f_obj,*g_obj,*h_obj,*i_obj, *(mutils::from_bytes<std::decay_t<decltype(j)> >(dsm, buf + bytes_read + mutils::bytes_size(*i_obj)))); \
    } 

#define DEFAULT_DESERIALIZE12(Name,a,b,c,d,e,f,g,h,i,j,k) \
    static std::unique_ptr<Name> from_bytes(mutils::DeserializationManager* dsm, char const * buf){ \
        auto a_obj = mutils::from_bytes<std::decay_t<decltype(a)> >(dsm, buf); \
        std::size_t bytes_read = mutils::bytes_size(*a_obj); \
        auto b_obj = mutils::from_bytes<std::decay_t<decltype(b)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*b_obj); \
        auto c_obj = mutils::from_bytes<std::decay_t<decltype(c)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*c_obj); \
        auto d_obj = mutils::from_bytes<std::decay_t<decltype(d)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*d_obj); \
        auto e_obj = mutils::from_bytes<std::decay_t<decltype(e)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*e_obj); \
        auto f_obj = mutils::from_bytes<std::decay_t<decltype(f)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*f_obj); \
        auto g_obj = mutils::from_bytes<std::decay_t<decltype(g)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*g_obj); \
        auto h_obj = mutils::from_bytes<std::decay_t<decltype(h)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*h_obj); \
        auto i_obj = mutils::from_bytes<std::decay_t<decltype(i)> >(dsm, buf + bytes_read); \
        bytes_read += mutils::bytes_size(*i_obj); \
        auto j_obj = mutils::from_bytes<std::decay_t<decltype(j)> >(dsm, buf + bytes_read); \
        return std::make_unique<Name>(*a_obj,*b_obj,*c_obj,*d_obj,*e_obj,*f_obj,*g_obj,*h_obj,*i_obj,*j_obj, *(mutils::from_bytes<std::decay_t<decltype(k)> >(dsm, buf + bytes_read + mutils::bytes_size(*j_obj)))); \
    } 


#define DEFAULT_SERIALIZE_IMPL2(count, ...) DEFAULT_SERIALIZE ## count (__VA_ARGS__)
#define DEFAULT_SERIALIZE_IMPL(count, ...) DEFAULT_SERIALIZE_IMPL2(count, __VA_ARGS__)
#define DEFAULT_SERIALIZE(...) DEFAULT_SERIALIZE_IMPL(VA_NARGS(__VA_ARGS__), __VA_ARGS__)


#define DEFAULT_DESERIALIZE_IMPL2(count, ...) DEFAULT_DESERIALIZE ## count (__VA_ARGS__)
#define DEFAULT_DESERIALIZE_IMPL(count, ...) DEFAULT_DESERIALIZE_IMPL2(count, __VA_ARGS__)
#define DEFAULT_DESERIALIZE(...) DEFAULT_DESERIALIZE_IMPL(VA_NARGS(__VA_ARGS__), __VA_ARGS__)

#define DEFAULT_DESERIALIZE_NOALLOC(Name)\
    template<typename... SerializationMacroArgs>\
    static mutils::context_ptr<Name> from_bytes_noalloc(SerializationMacroArgs&& ... args){ \
        return mutils::context_ptr<Name>(Name::from_bytes(std::forward<SerializationMacroArgs>(args)...).release()); \
    }\
    template<typename... SerializationMacroArgs>\
    static mutils::context_ptr<const Name> from_bytes_noalloc_const(SerializationMacroArgs&& ... args){ \
        return mutils::context_ptr<const Name>(Name::from_bytes(std::forward<SerializationMacroArgs>(args)...).release()); \
    }


/**
 * THIS (below) is the only user-facing macro in this file.
 * It's for automatically generating basic serialization support.
 * plop this macro inside the body of a class which extends 
 * ByteRepresentable, providing the name of the class (that you plopped this into)
 * as the first argument and the name of the class's fields as the remaining arguments.
 * Right now we only support up to seven fields; adding more support is easy, just ask if
 * you need.
 *
 * MAJOR CAVEAT: This macro assumes that there is a constructor
 * which takes all the class members (in the order listed). 
 * it's fine if this is a private constructor, but it needs to exist.
 * 
 */

#define DEFAULT_SERIALIZATION_SUPPORT(CLASS_NAME,CLASS_MEMBERS...)		\
        DEFAULT_SERIALIZE(CLASS_MEMBERS) DEFAULT_DESERIALIZE(CLASS_NAME,CLASS_MEMBERS) DEFAULT_DESERIALIZE_NOALLOC(CLASS_NAME)  \
    void ensure_registered(mutils::DeserializationManager&){}
