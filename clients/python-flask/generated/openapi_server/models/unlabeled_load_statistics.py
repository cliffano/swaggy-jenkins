# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server import util


class UnlabeledLoadStatistics(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, _class: str=None):  # noqa: E501
        """UnlabeledLoadStatistics - a model defined in OpenAPI

        :param _class: The _class of this UnlabeledLoadStatistics.  # noqa: E501
        :type _class: str
        """
        self.openapi_types = {
            '_class': str
        }

        self.attribute_map = {
            '_class': '_class'
        }

        self.__class = _class

    @classmethod
    def from_dict(cls, dikt) -> 'UnlabeledLoadStatistics':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The UnlabeledLoadStatistics of this UnlabeledLoadStatistics.  # noqa: E501
        :rtype: UnlabeledLoadStatistics
        """
        return util.deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """Gets the _class of this UnlabeledLoadStatistics.


        :return: The _class of this UnlabeledLoadStatistics.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """Sets the _class of this UnlabeledLoadStatistics.


        :param _class: The _class of this UnlabeledLoadStatistics.
        :type _class: str
        """

        self.__class = _class