# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.cause_action import CauseAction  # noqa: F401,E501
from openapi_server.models.empty_change_log_set import EmptyChangeLogSet  # noqa: F401,E501
from openapi_server import util


class FreeStyleBuild(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, _class: str=None, number: int=None, url: str=None, actions: List[CauseAction]=None, building: bool=None, description: str=None, display_name: str=None, duration: int=None, estimated_duration: int=None, executor: str=None, full_display_name: str=None, id: str=None, keep_log: bool=None, queue_id: int=None, result: str=None, timestamp: int=None, built_on: str=None, change_set: EmptyChangeLogSet=None):  # noqa: E501
        """FreeStyleBuild - a model defined in OpenAPI

        :param _class: The _class of this FreeStyleBuild.  # noqa: E501
        :type _class: str
        :param number: The number of this FreeStyleBuild.  # noqa: E501
        :type number: int
        :param url: The url of this FreeStyleBuild.  # noqa: E501
        :type url: str
        :param actions: The actions of this FreeStyleBuild.  # noqa: E501
        :type actions: List[CauseAction]
        :param building: The building of this FreeStyleBuild.  # noqa: E501
        :type building: bool
        :param description: The description of this FreeStyleBuild.  # noqa: E501
        :type description: str
        :param display_name: The display_name of this FreeStyleBuild.  # noqa: E501
        :type display_name: str
        :param duration: The duration of this FreeStyleBuild.  # noqa: E501
        :type duration: int
        :param estimated_duration: The estimated_duration of this FreeStyleBuild.  # noqa: E501
        :type estimated_duration: int
        :param executor: The executor of this FreeStyleBuild.  # noqa: E501
        :type executor: str
        :param full_display_name: The full_display_name of this FreeStyleBuild.  # noqa: E501
        :type full_display_name: str
        :param id: The id of this FreeStyleBuild.  # noqa: E501
        :type id: str
        :param keep_log: The keep_log of this FreeStyleBuild.  # noqa: E501
        :type keep_log: bool
        :param queue_id: The queue_id of this FreeStyleBuild.  # noqa: E501
        :type queue_id: int
        :param result: The result of this FreeStyleBuild.  # noqa: E501
        :type result: str
        :param timestamp: The timestamp of this FreeStyleBuild.  # noqa: E501
        :type timestamp: int
        :param built_on: The built_on of this FreeStyleBuild.  # noqa: E501
        :type built_on: str
        :param change_set: The change_set of this FreeStyleBuild.  # noqa: E501
        :type change_set: EmptyChangeLogSet
        """
        self.openapi_types = {
            '_class': str,
            'number': int,
            'url': str,
            'actions': List[CauseAction],
            'building': bool,
            'description': str,
            'display_name': str,
            'duration': int,
            'estimated_duration': int,
            'executor': str,
            'full_display_name': str,
            'id': str,
            'keep_log': bool,
            'queue_id': int,
            'result': str,
            'timestamp': int,
            'built_on': str,
            'change_set': EmptyChangeLogSet
        }

        self.attribute_map = {
            '_class': '_class',
            'number': 'number',
            'url': 'url',
            'actions': 'actions',
            'building': 'building',
            'description': 'description',
            'display_name': 'displayName',
            'duration': 'duration',
            'estimated_duration': 'estimatedDuration',
            'executor': 'executor',
            'full_display_name': 'fullDisplayName',
            'id': 'id',
            'keep_log': 'keepLog',
            'queue_id': 'queueId',
            'result': 'result',
            'timestamp': 'timestamp',
            'built_on': 'builtOn',
            'change_set': 'changeSet'
        }

        self.__class = _class
        self._number = number
        self._url = url
        self._actions = actions
        self._building = building
        self._description = description
        self._display_name = display_name
        self._duration = duration
        self._estimated_duration = estimated_duration
        self._executor = executor
        self._full_display_name = full_display_name
        self._id = id
        self._keep_log = keep_log
        self._queue_id = queue_id
        self._result = result
        self._timestamp = timestamp
        self._built_on = built_on
        self._change_set = change_set

    @classmethod
    def from_dict(cls, dikt) -> 'FreeStyleBuild':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The FreeStyleBuild of this FreeStyleBuild.  # noqa: E501
        :rtype: FreeStyleBuild
        """
        return util.deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """Gets the _class of this FreeStyleBuild.


        :return: The _class of this FreeStyleBuild.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """Sets the _class of this FreeStyleBuild.


        :param _class: The _class of this FreeStyleBuild.
        :type _class: str
        """

        self.__class = _class

    @property
    def number(self) -> int:
        """Gets the number of this FreeStyleBuild.


        :return: The number of this FreeStyleBuild.
        :rtype: int
        """
        return self._number

    @number.setter
    def number(self, number: int):
        """Sets the number of this FreeStyleBuild.


        :param number: The number of this FreeStyleBuild.
        :type number: int
        """

        self._number = number

    @property
    def url(self) -> str:
        """Gets the url of this FreeStyleBuild.


        :return: The url of this FreeStyleBuild.
        :rtype: str
        """
        return self._url

    @url.setter
    def url(self, url: str):
        """Sets the url of this FreeStyleBuild.


        :param url: The url of this FreeStyleBuild.
        :type url: str
        """

        self._url = url

    @property
    def actions(self) -> List[CauseAction]:
        """Gets the actions of this FreeStyleBuild.


        :return: The actions of this FreeStyleBuild.
        :rtype: List[CauseAction]
        """
        return self._actions

    @actions.setter
    def actions(self, actions: List[CauseAction]):
        """Sets the actions of this FreeStyleBuild.


        :param actions: The actions of this FreeStyleBuild.
        :type actions: List[CauseAction]
        """

        self._actions = actions

    @property
    def building(self) -> bool:
        """Gets the building of this FreeStyleBuild.


        :return: The building of this FreeStyleBuild.
        :rtype: bool
        """
        return self._building

    @building.setter
    def building(self, building: bool):
        """Sets the building of this FreeStyleBuild.


        :param building: The building of this FreeStyleBuild.
        :type building: bool
        """

        self._building = building

    @property
    def description(self) -> str:
        """Gets the description of this FreeStyleBuild.


        :return: The description of this FreeStyleBuild.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this FreeStyleBuild.


        :param description: The description of this FreeStyleBuild.
        :type description: str
        """

        self._description = description

    @property
    def display_name(self) -> str:
        """Gets the display_name of this FreeStyleBuild.


        :return: The display_name of this FreeStyleBuild.
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name: str):
        """Sets the display_name of this FreeStyleBuild.


        :param display_name: The display_name of this FreeStyleBuild.
        :type display_name: str
        """

        self._display_name = display_name

    @property
    def duration(self) -> int:
        """Gets the duration of this FreeStyleBuild.


        :return: The duration of this FreeStyleBuild.
        :rtype: int
        """
        return self._duration

    @duration.setter
    def duration(self, duration: int):
        """Sets the duration of this FreeStyleBuild.


        :param duration: The duration of this FreeStyleBuild.
        :type duration: int
        """

        self._duration = duration

    @property
    def estimated_duration(self) -> int:
        """Gets the estimated_duration of this FreeStyleBuild.


        :return: The estimated_duration of this FreeStyleBuild.
        :rtype: int
        """
        return self._estimated_duration

    @estimated_duration.setter
    def estimated_duration(self, estimated_duration: int):
        """Sets the estimated_duration of this FreeStyleBuild.


        :param estimated_duration: The estimated_duration of this FreeStyleBuild.
        :type estimated_duration: int
        """

        self._estimated_duration = estimated_duration

    @property
    def executor(self) -> str:
        """Gets the executor of this FreeStyleBuild.


        :return: The executor of this FreeStyleBuild.
        :rtype: str
        """
        return self._executor

    @executor.setter
    def executor(self, executor: str):
        """Sets the executor of this FreeStyleBuild.


        :param executor: The executor of this FreeStyleBuild.
        :type executor: str
        """

        self._executor = executor

    @property
    def full_display_name(self) -> str:
        """Gets the full_display_name of this FreeStyleBuild.


        :return: The full_display_name of this FreeStyleBuild.
        :rtype: str
        """
        return self._full_display_name

    @full_display_name.setter
    def full_display_name(self, full_display_name: str):
        """Sets the full_display_name of this FreeStyleBuild.


        :param full_display_name: The full_display_name of this FreeStyleBuild.
        :type full_display_name: str
        """

        self._full_display_name = full_display_name

    @property
    def id(self) -> str:
        """Gets the id of this FreeStyleBuild.


        :return: The id of this FreeStyleBuild.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id: str):
        """Sets the id of this FreeStyleBuild.


        :param id: The id of this FreeStyleBuild.
        :type id: str
        """

        self._id = id

    @property
    def keep_log(self) -> bool:
        """Gets the keep_log of this FreeStyleBuild.


        :return: The keep_log of this FreeStyleBuild.
        :rtype: bool
        """
        return self._keep_log

    @keep_log.setter
    def keep_log(self, keep_log: bool):
        """Sets the keep_log of this FreeStyleBuild.


        :param keep_log: The keep_log of this FreeStyleBuild.
        :type keep_log: bool
        """

        self._keep_log = keep_log

    @property
    def queue_id(self) -> int:
        """Gets the queue_id of this FreeStyleBuild.


        :return: The queue_id of this FreeStyleBuild.
        :rtype: int
        """
        return self._queue_id

    @queue_id.setter
    def queue_id(self, queue_id: int):
        """Sets the queue_id of this FreeStyleBuild.


        :param queue_id: The queue_id of this FreeStyleBuild.
        :type queue_id: int
        """

        self._queue_id = queue_id

    @property
    def result(self) -> str:
        """Gets the result of this FreeStyleBuild.


        :return: The result of this FreeStyleBuild.
        :rtype: str
        """
        return self._result

    @result.setter
    def result(self, result: str):
        """Sets the result of this FreeStyleBuild.


        :param result: The result of this FreeStyleBuild.
        :type result: str
        """

        self._result = result

    @property
    def timestamp(self) -> int:
        """Gets the timestamp of this FreeStyleBuild.


        :return: The timestamp of this FreeStyleBuild.
        :rtype: int
        """
        return self._timestamp

    @timestamp.setter
    def timestamp(self, timestamp: int):
        """Sets the timestamp of this FreeStyleBuild.


        :param timestamp: The timestamp of this FreeStyleBuild.
        :type timestamp: int
        """

        self._timestamp = timestamp

    @property
    def built_on(self) -> str:
        """Gets the built_on of this FreeStyleBuild.


        :return: The built_on of this FreeStyleBuild.
        :rtype: str
        """
        return self._built_on

    @built_on.setter
    def built_on(self, built_on: str):
        """Sets the built_on of this FreeStyleBuild.


        :param built_on: The built_on of this FreeStyleBuild.
        :type built_on: str
        """

        self._built_on = built_on

    @property
    def change_set(self) -> EmptyChangeLogSet:
        """Gets the change_set of this FreeStyleBuild.


        :return: The change_set of this FreeStyleBuild.
        :rtype: EmptyChangeLogSet
        """
        return self._change_set

    @change_set.setter
    def change_set(self, change_set: EmptyChangeLogSet):
        """Sets the change_set of this FreeStyleBuild.


        :param change_set: The change_set of this FreeStyleBuild.
        :type change_set: EmptyChangeLogSet
        """

        self._change_set = change_set
