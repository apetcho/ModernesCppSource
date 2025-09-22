// trivialDestructor.cpp
    
namespace xyz {
  struct Widget; // forward decl
  Widget *new_widget();
} // namespace xyz

int main() {
  xyz::Widget *p = xyz::new_widget();
  delete p;
}

namespace xyz {
struct Widget {
  const char *d_name;
  int         d_data;
  // (implicit) trivial destructor
  // This is the only difference.
}; 

Widget *new_widget() { 
    return new Widget(); 
}
} // namespace xyz
