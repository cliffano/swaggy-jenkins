<?php
/**
 * HudsonMasterComputer
 */
namespace OpenAPIServer\Model;

/**
 * HudsonMasterComputer
 */
class HudsonMasterComputer {

    /** @var string $class */
    private $class;

    /** @var string $displayName */
    private $displayName;

    /** @var \OpenAPIServer\Model\HudsonMasterComputerexecutors[] $executors */
    private $executors;

    /** @var string $icon */
    private $icon;

    /** @var string $iconClassName */
    private $iconClassName;

    /** @var bool $idle */
    private $idle;

    /** @var bool $jnlpAgent */
    private $jnlpAgent;

    /** @var bool $launchSupported */
    private $launchSupported;

    /** @var \OpenAPIServer\Model\Label1 $loadStatistics */
    private $loadStatistics;

    /** @var bool $manualLaunchAllowed */
    private $manualLaunchAllowed;

    /** @var \OpenAPIServer\Model\HudsonMasterComputermonitorData $monitorData */
    private $monitorData;

    /** @var int $numExecutors */
    private $numExecutors;

    /** @var bool $offline */
    private $offline;

    /** @var string $offlineCause */
    private $offlineCause;

    /** @var string $offlineCauseReason */
    private $offlineCauseReason;

    /** @var bool $temporarilyOffline */
    private $temporarilyOffline;

}
