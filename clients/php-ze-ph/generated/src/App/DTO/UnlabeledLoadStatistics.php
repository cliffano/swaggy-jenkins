<?php

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 */
class UnlabeledLoadStatistics
{
    /**
     * @DTA\Data(field="_class", nullable=true)
     * @DTA\Validator(name="Type", options={"type":"string"})
     * @var string
     */
    public $_class;
}
