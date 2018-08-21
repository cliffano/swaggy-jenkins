# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server import util


class DefaultCrumbIssuer(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, _class: str=None, crumb: str=None, crumb_request_field: str=None):  # noqa: E501
        """DefaultCrumbIssuer - a model defined in OpenAPI

        :param _class: The _class of this DefaultCrumbIssuer.  # noqa: E501
        :type _class: str
        :param crumb: The crumb of this DefaultCrumbIssuer.  # noqa: E501
        :type crumb: str
        :param crumb_request_field: The crumb_request_field of this DefaultCrumbIssuer.  # noqa: E501
        :type crumb_request_field: str
        """
        self.openapi_types = {
            '_class': str,
            'crumb': str,
            'crumb_request_field': str
        }

        self.attribute_map = {
            '_class': '_class',
            'crumb': 'crumb',
            'crumb_request_field': 'crumbRequestField'
        }

        self.__class = _class
        self._crumb = crumb
        self._crumb_request_field = crumb_request_field

    @classmethod
    def from_dict(cls, dikt) -> 'DefaultCrumbIssuer':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The DefaultCrumbIssuer of this DefaultCrumbIssuer.  # noqa: E501
        :rtype: DefaultCrumbIssuer
        """
        return util.deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """Gets the _class of this DefaultCrumbIssuer.


        :return: The _class of this DefaultCrumbIssuer.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """Sets the _class of this DefaultCrumbIssuer.


        :param _class: The _class of this DefaultCrumbIssuer.
        :type _class: str
        """

        self.__class = _class

    @property
    def crumb(self) -> str:
        """Gets the crumb of this DefaultCrumbIssuer.


        :return: The crumb of this DefaultCrumbIssuer.
        :rtype: str
        """
        return self._crumb

    @crumb.setter
    def crumb(self, crumb: str):
        """Sets the crumb of this DefaultCrumbIssuer.


        :param crumb: The crumb of this DefaultCrumbIssuer.
        :type crumb: str
        """

        self._crumb = crumb

    @property
    def crumb_request_field(self) -> str:
        """Gets the crumb_request_field of this DefaultCrumbIssuer.


        :return: The crumb_request_field of this DefaultCrumbIssuer.
        :rtype: str
        """
        return self._crumb_request_field

    @crumb_request_field.setter
    def crumb_request_field(self, crumb_request_field: str):
        """Sets the crumb_request_field of this DefaultCrumbIssuer.


        :param crumb_request_field: The crumb_request_field of this DefaultCrumbIssuer.
        :type crumb_request_field: str
        """

        self._crumb_request_field = crumb_request_field