
#include "Functional.hh"

void cadabra::do_list(const Ex& tr, Ex::iterator it, std::function<void(Ex::iterator)> f)
	{
	if(*it->name=="\\expression")
		it=tr.begin(it);

   if(*it->name=="\\comma") {
		Ex::sibling_iterator sib=tr.begin(it);
		while(sib!=tr.end(it)) {
			f(sib);
			++sib;
			}
      }
	else {
		f(it);
		}
	}

Ex cadabra::make_list(Ex el)
	{
	auto it=el.begin();
	if(*it->name=="\\expression") 
		it=el.begin(it);

	if(*it->name!="\\comma")
		el.wrap(it, str_node("\\comma"));

	return el;
	}


