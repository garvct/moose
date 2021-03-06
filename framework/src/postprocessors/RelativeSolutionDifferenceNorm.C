/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*           (c) 2010 Battelle Energy Alliance, LLC             */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/

#include "RelativeSolutionDifferenceNorm.h"
#include "Transient.h"

template <>
InputParameters
validParams<RelativeSolutionDifferenceNorm>()
{
  InputParameters params = validParams<GeneralPostprocessor>();
  return params;
}

RelativeSolutionDifferenceNorm::RelativeSolutionDifferenceNorm(const InputParameters & params)
  : GeneralPostprocessor(params)
{
}

Real
RelativeSolutionDifferenceNorm::getValue()
{
  return _fe_problem.relativeSolutionDifferenceNorm();
}
