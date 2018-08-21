<?php
/**
 * PipelineBranchesitemlatestRun
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
 * Class representing the PipelineBranchesitemlatestRun model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class PipelineBranchesitemlatestRun 
{
        /**
     * @var int|null
     * @SerializedName("durationInMillis")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $durationInMillis;

    /**
     * @var int|null
     * @SerializedName("estimatedDurationInMillis")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $estimatedDurationInMillis;

    /**
     * @var string|null
     * @SerializedName("enQueueTime")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $enQueueTime;

    /**
     * @var string|null
     * @SerializedName("endTime")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $endTime;

    /**
     * @var string|null
     * @SerializedName("id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $id;

    /**
     * @var string|null
     * @SerializedName("organization")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $organization;

    /**
     * @var string|null
     * @SerializedName("pipeline")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $pipeline;

    /**
     * @var string|null
     * @SerializedName("result")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $result;

    /**
     * @var string|null
     * @SerializedName("runSummary")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $runSummary;

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
     * @var string|null
     * @SerializedName("type")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $type;

    /**
     * @var string|null
     * @SerializedName("commitId")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $commitId;

    /**
     * @var string|null
     * @SerializedName("_class")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $class;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->durationInMillis = isset($data['durationInMillis']) ? $data['durationInMillis'] : null;
        $this->estimatedDurationInMillis = isset($data['estimatedDurationInMillis']) ? $data['estimatedDurationInMillis'] : null;
        $this->enQueueTime = isset($data['enQueueTime']) ? $data['enQueueTime'] : null;
        $this->endTime = isset($data['endTime']) ? $data['endTime'] : null;
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->organization = isset($data['organization']) ? $data['organization'] : null;
        $this->pipeline = isset($data['pipeline']) ? $data['pipeline'] : null;
        $this->result = isset($data['result']) ? $data['result'] : null;
        $this->runSummary = isset($data['runSummary']) ? $data['runSummary'] : null;
        $this->startTime = isset($data['startTime']) ? $data['startTime'] : null;
        $this->state = isset($data['state']) ? $data['state'] : null;
        $this->type = isset($data['type']) ? $data['type'] : null;
        $this->commitId = isset($data['commitId']) ? $data['commitId'] : null;
        $this->class = isset($data['class']) ? $data['class'] : null;
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
     * Gets estimatedDurationInMillis.
     *
     * @return int|null
     */
    public function getEstimatedDurationInMillis()
    {
        return $this->estimatedDurationInMillis;
    }

    /**
     * Sets estimatedDurationInMillis.
     *
     * @param int|null $estimatedDurationInMillis
     *
     * @return $this
     */
    public function setEstimatedDurationInMillis($estimatedDurationInMillis = null)
    {
        $this->estimatedDurationInMillis = $estimatedDurationInMillis;

        return $this;
    }

    /**
     * Gets enQueueTime.
     *
     * @return string|null
     */
    public function getEnQueueTime()
    {
        return $this->enQueueTime;
    }

    /**
     * Sets enQueueTime.
     *
     * @param string|null $enQueueTime
     *
     * @return $this
     */
    public function setEnQueueTime($enQueueTime = null)
    {
        $this->enQueueTime = $enQueueTime;

        return $this;
    }

    /**
     * Gets endTime.
     *
     * @return string|null
     */
    public function getEndTime()
    {
        return $this->endTime;
    }

    /**
     * Sets endTime.
     *
     * @param string|null $endTime
     *
     * @return $this
     */
    public function setEndTime($endTime = null)
    {
        $this->endTime = $endTime;

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
     * Gets organization.
     *
     * @return string|null
     */
    public function getOrganization()
    {
        return $this->organization;
    }

    /**
     * Sets organization.
     *
     * @param string|null $organization
     *
     * @return $this
     */
    public function setOrganization($organization = null)
    {
        $this->organization = $organization;

        return $this;
    }

    /**
     * Gets pipeline.
     *
     * @return string|null
     */
    public function getPipeline()
    {
        return $this->pipeline;
    }

    /**
     * Sets pipeline.
     *
     * @param string|null $pipeline
     *
     * @return $this
     */
    public function setPipeline($pipeline = null)
    {
        $this->pipeline = $pipeline;

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
     * Gets runSummary.
     *
     * @return string|null
     */
    public function getRunSummary()
    {
        return $this->runSummary;
    }

    /**
     * Sets runSummary.
     *
     * @param string|null $runSummary
     *
     * @return $this
     */
    public function setRunSummary($runSummary = null)
    {
        $this->runSummary = $runSummary;

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

    /**
     * Gets type.
     *
     * @return string|null
     */
    public function getType()
    {
        return $this->type;
    }

    /**
     * Sets type.
     *
     * @param string|null $type
     *
     * @return $this
     */
    public function setType($type = null)
    {
        $this->type = $type;

        return $this;
    }

    /**
     * Gets commitId.
     *
     * @return string|null
     */
    public function getCommitId()
    {
        return $this->commitId;
    }

    /**
     * Sets commitId.
     *
     * @param string|null $commitId
     *
     * @return $this
     */
    public function setCommitId($commitId = null)
    {
        $this->commitId = $commitId;

        return $this;
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
}


