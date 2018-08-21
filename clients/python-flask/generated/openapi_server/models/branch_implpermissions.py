# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server import util


class BranchImplpermissions(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, create: bool=None, read: bool=None, start: bool=None, stop: bool=None, _class: str=None):  # noqa: E501
        """BranchImplpermissions - a model defined in OpenAPI

        :param create: The create of this BranchImplpermissions.  # noqa: E501
        :type create: bool
        :param read: The read of this BranchImplpermissions.  # noqa: E501
        :type read: bool
        :param start: The start of this BranchImplpermissions.  # noqa: E501
        :type start: bool
        :param stop: The stop of this BranchImplpermissions.  # noqa: E501
        :type stop: bool
        :param _class: The _class of this BranchImplpermissions.  # noqa: E501
        :type _class: str
        """
        self.openapi_types = {
            'create': bool,
            'read': bool,
            'start': bool,
            'stop': bool,
            '_class': str
        }

        self.attribute_map = {
            'create': 'create',
            'read': 'read',
            'start': 'start',
            'stop': 'stop',
            '_class': '_class'
        }

        self._create = create
        self._read = read
        self._start = start
        self._stop = stop
        self.__class = _class

    @classmethod
    def from_dict(cls, dikt) -> 'BranchImplpermissions':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The BranchImplpermissions of this BranchImplpermissions.  # noqa: E501
        :rtype: BranchImplpermissions
        """
        return util.deserialize_model(dikt, cls)

    @property
    def create(self) -> bool:
        """Gets the create of this BranchImplpermissions.


        :return: The create of this BranchImplpermissions.
        :rtype: bool
        """
        return self._create

    @create.setter
    def create(self, create: bool):
        """Sets the create of this BranchImplpermissions.


        :param create: The create of this BranchImplpermissions.
        :type create: bool
        """

        self._create = create

    @property
    def read(self) -> bool:
        """Gets the read of this BranchImplpermissions.


        :return: The read of this BranchImplpermissions.
        :rtype: bool
        """
        return self._read

    @read.setter
    def read(self, read: bool):
        """Sets the read of this BranchImplpermissions.


        :param read: The read of this BranchImplpermissions.
        :type read: bool
        """

        self._read = read

    @property
    def start(self) -> bool:
        """Gets the start of this BranchImplpermissions.


        :return: The start of this BranchImplpermissions.
        :rtype: bool
        """
        return self._start

    @start.setter
    def start(self, start: bool):
        """Sets the start of this BranchImplpermissions.


        :param start: The start of this BranchImplpermissions.
        :type start: bool
        """

        self._start = start

    @property
    def stop(self) -> bool:
        """Gets the stop of this BranchImplpermissions.


        :return: The stop of this BranchImplpermissions.
        :rtype: bool
        """
        return self._stop

    @stop.setter
    def stop(self, stop: bool):
        """Sets the stop of this BranchImplpermissions.


        :param stop: The stop of this BranchImplpermissions.
        :type stop: bool
        """

        self._stop = stop

    @property
    def _class(self) -> str:
        """Gets the _class of this BranchImplpermissions.


        :return: The _class of this BranchImplpermissions.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """Sets the _class of this BranchImplpermissions.


        :param _class: The _class of this BranchImplpermissions.
        :type _class: str
        """

        self.__class = _class
