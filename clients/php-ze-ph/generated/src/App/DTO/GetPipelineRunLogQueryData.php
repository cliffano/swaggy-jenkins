<?php

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 * Query parameters for getPipelineRunLog
 */
class GetPipelineRunLogQueryData
{
    /**
     * Set to true in order to download the file, otherwise it&#39;s passed as a response body
     * @DTA\Data(field="download", nullable=true)
     * @DTA\Strategy(name="QueryParameter", options={"type":"bool"})
     * @DTA\Validator(name="QueryParameterType", options={"type":"bool"})
     * @var bool
     */
    public $download;
    /**
     * Start position of the log
     * @DTA\Data(field="start", nullable=true)
     * @DTA\Strategy(name="QueryParameter", options={"type":"int"})
     * @DTA\Validator(name="QueryParameterType", options={"type":"int"})
     * @var int
     */
    public $start;
}
