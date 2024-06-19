// Copyright (c) 2017-2024 Advanced Micro Devices, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#include <hip/hip_runtime.h>

#include <hiprand/hiprand.h>


hiprandStatus_t HIPRANDAPI hiprandCreateGenerator(hiprandGenerator_t* generator,
                                                  hiprandRngType_t    rng_type)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandCreateGeneratorHost(hiprandGenerator_t* generator,
                                                      hiprandRngType_t    rng_type)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandDestroyGenerator(hiprandGenerator_t generator)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI
    hiprandGenerate(hiprandGenerator_t generator, unsigned int* output_data, size_t n)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI
    hiprandGenerateChar(hiprandGenerator_t generator, unsigned char* output_data, size_t n)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI
    hiprandGenerateShort(hiprandGenerator_t generator, unsigned short* output_data, size_t n)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGenerateLongLong(hiprandGenerator_t      generator,
                                                   unsigned long long int* output_data,
                                                   size_t                  n)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI
    hiprandGenerateUniform(hiprandGenerator_t generator, float* output_data, size_t n)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI
    hiprandGenerateUniformDouble(hiprandGenerator_t generator, double* output_data, size_t n)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI
    hiprandGenerateUniformHalf(hiprandGenerator_t generator, half* output_data, size_t n)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGenerateNormal(
    hiprandGenerator_t generator, float* output_data, size_t n, float mean, float stddev)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGenerateNormalDouble(
    hiprandGenerator_t generator, double* output_data, size_t n, double mean, double stddev)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGenerateNormalHalf(
    hiprandGenerator_t generator, half* output_data, size_t n, half mean, half stddev)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGenerateLogNormal(
    hiprandGenerator_t generator, float* output_data, size_t n, float mean, float stddev)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGenerateLogNormalDouble(
    hiprandGenerator_t generator, double* output_data, size_t n, double mean, double stddev)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGenerateLogNormalHalf(
    hiprandGenerator_t generator, half* output_data, size_t n, half mean, half stddev)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGeneratePoisson(hiprandGenerator_t generator,
                                                  unsigned int*      output_data,
                                                  size_t             n,
                                                  double             lambda)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGenerateSeeds(hiprandGenerator_t generator)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandSetStream(hiprandGenerator_t generator, hipStream_t stream)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandSetPseudoRandomGeneratorSeed(hiprandGenerator_t generator,
                                                               unsigned long long seed)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandSetGeneratorOffset(hiprandGenerator_t generator,
                                                     unsigned long long offset)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandSetGeneratorOrdering(hiprandGenerator_t generator,
                                                       hiprandOrdering_t  order)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandSetQuasiRandomGeneratorDimensions(hiprandGenerator_t generator,
                                                                    unsigned int       dimensions)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGetVersion(int* version)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI
    hiprandCreatePoissonDistribution(double                         lambda,
                                     hiprandDiscreteDistribution_t* discrete_distribution)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI
    hiprandDestroyDistribution(hiprandDiscreteDistribution_t discrete_distribution)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGetDirectionVectors32(hiprandDirectionVectors32_t** vectors,
                                                        hiprandDirectionVectorSet_t   set)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGetDirectionVectors64(hiprandDirectionVectors64_t** vectors,
                                                        hiprandDirectionVectorSet_t   set)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGetScrambleConstants32(const unsigned int** constants)
{
    return HIPRAND_STATUS_SUCCESS;
}

hiprandStatus_t HIPRANDAPI hiprandGetScrambleConstants64(const unsigned long long** constants)
{
    return HIPRAND_STATUS_SUCCESS;
}
