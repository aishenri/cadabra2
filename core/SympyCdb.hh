
#pragma once

#include "Props.hh"
#include "Storage.hh"
#include "Kernel.hh"

namespace sympy {

   /// \ingroup scalar
   ///
   /// Functionality to act with Sympy functions on (parts of) Cadabra Ex expressions
   /// and read the result back into the same Ex. This duplicates some of the 
   /// logic in PythonCdb.hh, in particular make_Ex_from_string, but it is best to
   /// keep these two completely separate.

	Ex::iterator apply(const Kernel&, Ex&, Ex::iterator&, const std::string& head, const std::string& args, const std::string& method);

//    /// \ingroup scalar
//    ///
//    /// Low-level function to feed a string to Python and read the result back in 
// 	/// as a Cadabra Ex. As compared to 'apply' above, this starts from a string rather
// 	/// than an Ex, and hence gives more flexibility in constructing input.
// 
// 	Ex python(Kernel&, Ex&, Ex::iterator&, const std::string& head, const std::string& args);


   /// \ingroup scalar
   ///
   /// Use Sympy to invert a matrix, given a set of rules determining its
   /// sparse components. Will return a set of Cadabra rules for the
   /// inverse matrix.

	Ex invert_matrix(const Kernel&, Ex& ex, Ex& rules);
	
};
