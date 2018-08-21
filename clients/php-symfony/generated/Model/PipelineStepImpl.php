<?php
/**
 * PipelineStepImpl
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the PipelineStepImpl model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class PipelineStepImpl 
{
        /**
     * @var string|null
     * @SerializedName("_class")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $class;

    /**
     * @var OpenAPI\Server\Model\PipelineStepImpllinks|null
     * @SerializedName("_links")
     * @Assert\Type("OpenAPI\Server\Model\PipelineStepImpllinks")
     * @Type("OpenAPI\Server\Model\PipelineStepImpllinks")
     */
    protected $links;

    /**
     * @var string|null
     * @SerializedName("displayName")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $displayName;

    /**
     * @var int|null
     * @SerializedName("durationInMillis")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $durationInMillis;

    /**
     * @var string|null
     * @SerializedName("id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $id;

    /**
     * @var OpenAPI\Server\Model\InputStepImpl|null
     * @SerializedName("input")
     * @Assert\Type("OpenAPI\Server\Model\InputStepImpl")
     * @Type("OpenAPI\Server\Model\InputStepImpl")
     */
    protected $input;

    /**
     * @var string|null
     * @SerializedName("result")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $result;

    /**
     * @var string|null
     * @SerializedName("startTime")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $startTime;

    /**
     * @var string|null
     * @SerializedName("state")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $state;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->class = isset($data['class']) ? $data['class'] : null;
        $this->links = isset($data['links']) ? $data['links'] : null;
        $this->displayName = isset($data['displayName']) ? $data['displayName'] : null;
        $this->durationInMillis = isset($data['durationInMillis']) ? $data['durationInMillis'] : null;
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->input = isset($data['input']) ? $data['input'] : null;
        $this->result = isset($data['result']) ? $data['result'] : null;
        $this->startTime = isset($data['startTime']) ? $data['startTime'] : null;
        $this->state = isset($data['state']) ? $data['state'] : null;
    }

    /**
     * Gets class.
     *
     * @return string|null
     */
    public function getClass()
    {
        return $this->class;
    }

    /**
     * Sets class.
     *
     * @param string|null $class
     *
     * @return $this
     */
    public function setClass($class = null)
    {
        $this->class = $class;

        return $this;
    }

    /**
     * Gets links.
     *
     * @return OpenAPI\Server\Model\PipelineStepImpllinks|null
     */
    public function getLinks()
    {
        return $this->links;
    }

    /**
     * Sets links.
     *
     * @param OpenAPI\Server\Model\PipelineStepImpllinks|null $links
     *
     * @return $this
     */
    public function setLinks(PipelineStepImpllinks $links = null)
    {
        $this->links = $links;

        return $this;
    }

    /**
     * Gets displayName.
     *
     * @return string|null
     */
    public function getDisplayName()
    {
        return $this->displayName;
    }

    /**
     * Sets displayName.
     *
     * @param string|null $displayName
     *
     * @return $this
     */
    public function setDisplayName($displayName = null)
    {
        $this->displayName = $displayName;

        return $this;
    }

    /**
     * Gets durationInMillis.
     *
     * @return int|null
     */
    public function getDurationInMillis()
    {
        return $this->durationInMillis;
    }

    /**
     * Sets durationInMillis.
     *
     * @param int|null $durationInMillis
     *
     * @return $this
     */
    public function setDurationInMillis($durationInMillis = null)
    {
        $this->durationInMillis = $durationInMillis;

        return $this;
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Sets id.
     *
     * @param string|null $id
     *
     * @return $this
     */
    public function setId($id = null)
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets input.
     *
     * @return OpenAPI\Server\Model\InputStepImpl|null
     */
    public function getInput()
    {
        return $this->input;
    }

    /**
     * Sets input.
     *
     * @param OpenAPI\Server\Model\InputStepImpl|null $input
     *
     * @return $this
     */
    public function setInput(InputStepImpl $input = null)
    {
        $this->input = $input;

        return $this;
    }

    /**
     * Gets result.
     *
     * @return string|null
     */
    public function getResult()
    {
        return $this->result;
    }

    /**
     * Sets result.
     *
     * @param string|null $result
     *
     * @return $this
     */
    public function setResult($result = null)
    {
        $this->result = $result;

        return $this;
    }

    /**
     * Gets startTime.
     *
     * @return string|null
     */
    public function getStartTime()
    {
        return $this->startTime;
    }

    /**
     * Sets startTime.
     *
     * @param string|null $startTime
     *
     * @return $this
     */
    public function setStartTime($startTime = null)
    {
        $this->startTime = $startTime;

        return $this;
    }

    /**
     * Gets state.
     *
     * @return string|null
     */
    public function getState()
    {
        return $this->state;
    }

    /**
     * Sets state.
     *
     * @param string|null $state
     *
     * @return $this
     */
    public function setState($state = null)
    {
        $this->state = $state;

        return $this;
    }
}


