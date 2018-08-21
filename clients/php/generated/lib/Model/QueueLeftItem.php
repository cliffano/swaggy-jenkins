<?php
/**
 * QueueLeftItem
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 3.2.1-SNAPSHOT
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;

use \ArrayAccess;
use \OpenAPI\Client\ObjectSerializer;

/**
 * QueueLeftItem Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class QueueLeftItem implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'QueueLeftItem';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        '_class' => 'string',
        'actions' => '\OpenAPI\Client\Model\CauseAction[]',
        'blocked' => 'bool',
        'buildable' => 'bool',
        'id' => 'int',
        'in_queue_since' => 'int',
        'params' => 'string',
        'stuck' => 'bool',
        'task' => '\OpenAPI\Client\Model\FreeStyleProject',
        'url' => 'string',
        'why' => 'string',
        'cancelled' => 'bool',
        'executable' => '\OpenAPI\Client\Model\FreeStyleBuild'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        '_class' => null,
        'actions' => null,
        'blocked' => null,
        'buildable' => null,
        'id' => 'int32',
        'in_queue_since' => 'int32',
        'params' => null,
        'stuck' => null,
        'task' => null,
        'url' => null,
        'why' => null,
        'cancelled' => null,
        'executable' => null
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        '_class' => '_class',
        'actions' => 'actions',
        'blocked' => 'blocked',
        'buildable' => 'buildable',
        'id' => 'id',
        'in_queue_since' => 'inQueueSince',
        'params' => 'params',
        'stuck' => 'stuck',
        'task' => 'task',
        'url' => 'url',
        'why' => 'why',
        'cancelled' => 'cancelled',
        'executable' => 'executable'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        '_class' => 'setClass',
        'actions' => 'setActions',
        'blocked' => 'setBlocked',
        'buildable' => 'setBuildable',
        'id' => 'setId',
        'in_queue_since' => 'setInQueueSince',
        'params' => 'setParams',
        'stuck' => 'setStuck',
        'task' => 'setTask',
        'url' => 'setUrl',
        'why' => 'setWhy',
        'cancelled' => 'setCancelled',
        'executable' => 'setExecutable'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        '_class' => 'getClass',
        'actions' => 'getActions',
        'blocked' => 'getBlocked',
        'buildable' => 'getBuildable',
        'id' => 'getId',
        'in_queue_since' => 'getInQueueSince',
        'params' => 'getParams',
        'stuck' => 'getStuck',
        'task' => 'getTask',
        'url' => 'getUrl',
        'why' => 'getWhy',
        'cancelled' => 'getCancelled',
        'executable' => 'getExecutable'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['_class'] = isset($data['_class']) ? $data['_class'] : null;
        $this->container['actions'] = isset($data['actions']) ? $data['actions'] : null;
        $this->container['blocked'] = isset($data['blocked']) ? $data['blocked'] : null;
        $this->container['buildable'] = isset($data['buildable']) ? $data['buildable'] : null;
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['in_queue_since'] = isset($data['in_queue_since']) ? $data['in_queue_since'] : null;
        $this->container['params'] = isset($data['params']) ? $data['params'] : null;
        $this->container['stuck'] = isset($data['stuck']) ? $data['stuck'] : null;
        $this->container['task'] = isset($data['task']) ? $data['task'] : null;
        $this->container['url'] = isset($data['url']) ? $data['url'] : null;
        $this->container['why'] = isset($data['why']) ? $data['why'] : null;
        $this->container['cancelled'] = isset($data['cancelled']) ? $data['cancelled'] : null;
        $this->container['executable'] = isset($data['executable']) ? $data['executable'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets _class
     *
     * @return string|null
     */
    public function getClass()
    {
        return $this->container['_class'];
    }

    /**
     * Sets _class
     *
     * @param string|null $_class _class
     *
     * @return $this
     */
    public function setClass($_class)
    {
        $this->container['_class'] = $_class;

        return $this;
    }

    /**
     * Gets actions
     *
     * @return \OpenAPI\Client\Model\CauseAction[]|null
     */
    public function getActions()
    {
        return $this->container['actions'];
    }

    /**
     * Sets actions
     *
     * @param \OpenAPI\Client\Model\CauseAction[]|null $actions actions
     *
     * @return $this
     */
    public function setActions($actions)
    {
        $this->container['actions'] = $actions;

        return $this;
    }

    /**
     * Gets blocked
     *
     * @return bool|null
     */
    public function getBlocked()
    {
        return $this->container['blocked'];
    }

    /**
     * Sets blocked
     *
     * @param bool|null $blocked blocked
     *
     * @return $this
     */
    public function setBlocked($blocked)
    {
        $this->container['blocked'] = $blocked;

        return $this;
    }

    /**
     * Gets buildable
     *
     * @return bool|null
     */
    public function getBuildable()
    {
        return $this->container['buildable'];
    }

    /**
     * Sets buildable
     *
     * @param bool|null $buildable buildable
     *
     * @return $this
     */
    public function setBuildable($buildable)
    {
        $this->container['buildable'] = $buildable;

        return $this;
    }

    /**
     * Gets id
     *
     * @return int|null
     */
    public function getId()
    {
        return $this->container['id'];
    }

    /**
     * Sets id
     *
     * @param int|null $id id
     *
     * @return $this
     */
    public function setId($id)
    {
        $this->container['id'] = $id;

        return $this;
    }

    /**
     * Gets in_queue_since
     *
     * @return int|null
     */
    public function getInQueueSince()
    {
        return $this->container['in_queue_since'];
    }

    /**
     * Sets in_queue_since
     *
     * @param int|null $in_queue_since in_queue_since
     *
     * @return $this
     */
    public function setInQueueSince($in_queue_since)
    {
        $this->container['in_queue_since'] = $in_queue_since;

        return $this;
    }

    /**
     * Gets params
     *
     * @return string|null
     */
    public function getParams()
    {
        return $this->container['params'];
    }

    /**
     * Sets params
     *
     * @param string|null $params params
     *
     * @return $this
     */
    public function setParams($params)
    {
        $this->container['params'] = $params;

        return $this;
    }

    /**
     * Gets stuck
     *
     * @return bool|null
     */
    public function getStuck()
    {
        return $this->container['stuck'];
    }

    /**
     * Sets stuck
     *
     * @param bool|null $stuck stuck
     *
     * @return $this
     */
    public function setStuck($stuck)
    {
        $this->container['stuck'] = $stuck;

        return $this;
    }

    /**
     * Gets task
     *
     * @return \OpenAPI\Client\Model\FreeStyleProject|null
     */
    public function getTask()
    {
        return $this->container['task'];
    }

    /**
     * Sets task
     *
     * @param \OpenAPI\Client\Model\FreeStyleProject|null $task task
     *
     * @return $this
     */
    public function setTask($task)
    {
        $this->container['task'] = $task;

        return $this;
    }

    /**
     * Gets url
     *
     * @return string|null
     */
    public function getUrl()
    {
        return $this->container['url'];
    }

    /**
     * Sets url
     *
     * @param string|null $url url
     *
     * @return $this
     */
    public function setUrl($url)
    {
        $this->container['url'] = $url;

        return $this;
    }

    /**
     * Gets why
     *
     * @return string|null
     */
    public function getWhy()
    {
        return $this->container['why'];
    }

    /**
     * Sets why
     *
     * @param string|null $why why
     *
     * @return $this
     */
    public function setWhy($why)
    {
        $this->container['why'] = $why;

        return $this;
    }

    /**
     * Gets cancelled
     *
     * @return bool|null
     */
    public function getCancelled()
    {
        return $this->container['cancelled'];
    }

    /**
     * Sets cancelled
     *
     * @param bool|null $cancelled cancelled
     *
     * @return $this
     */
    public function setCancelled($cancelled)
    {
        $this->container['cancelled'] = $cancelled;

        return $this;
    }

    /**
     * Gets executable
     *
     * @return \OpenAPI\Client\Model\FreeStyleBuild|null
     */
    public function getExecutable()
    {
        return $this->container['executable'];
    }

    /**
     * Sets executable
     *
     * @param \OpenAPI\Client\Model\FreeStyleBuild|null $executable executable
     *
     * @return $this
     */
    public function setExecutable($executable)
    {
        $this->container['executable'] = $executable;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }
}


