#pylint: disable=missing-docstring
#################################################################
#                   DO NOT MODIFY THIS HEADER                   #
#  MOOSE - Multiphysics Object Oriented Simulation Environment  #
#                                                               #
#            (c) 2010 Battelle Energy Alliance, LLC             #
#                      ALL RIGHTS RESERVED                      #
#                                                               #
#           Prepared by Battelle Energy Alliance, LLC           #
#             Under Contract No. DE-AC07-05ID14517              #
#              With the U. S. Department of Energy              #
#                                                               #
#              See COPYRIGHT for full restrictions              #
#################################################################

from ImageAnnotation import ImageAnnotation
from TextAnnotationSource import TextAnnotationSource
from TimeAnnotationSource import TimeAnnotationSource
from .. import base
TextAnnotation = base.create_single_source_result(TextAnnotationSource)
TimeAnnotation = base.create_single_source_result(TimeAnnotationSource)
