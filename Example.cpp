#include "ButterworthIIR.h"

// Process a set of samples through a 3rd-order 90hz high pass filter
void ProcessHighPass90Hz(std::vector<float> &samples)
{
  auto filter = ButterworthIIR::Filter::CreateHighPass(3, 90.0f, 48000.0f);
  filter.ProcessInPlace(samples);
}