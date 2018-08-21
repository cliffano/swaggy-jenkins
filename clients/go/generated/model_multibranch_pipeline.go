/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * API version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type MultibranchPipeline struct {
	DisplayName string `json:"displayName,omitempty"`
	EstimatedDurationInMillis int32 `json:"estimatedDurationInMillis,omitempty"`
	LatestRun string `json:"latestRun,omitempty"`
	Name string `json:"name,omitempty"`
	Organization string `json:"organization,omitempty"`
	WeatherScore int32 `json:"weatherScore,omitempty"`
	BranchNames []string `json:"branchNames,omitempty"`
	NumberOfFailingBranches int32 `json:"numberOfFailingBranches,omitempty"`
	NumberOfFailingPullRequests int32 `json:"numberOfFailingPullRequests,omitempty"`
	NumberOfSuccessfulBranches int32 `json:"numberOfSuccessfulBranches,omitempty"`
	NumberOfSuccessfulPullRequests int32 `json:"numberOfSuccessfulPullRequests,omitempty"`
	TotalNumberOfBranches int32 `json:"totalNumberOfBranches,omitempty"`
	TotalNumberOfPullRequests int32 `json:"totalNumberOfPullRequests,omitempty"`
	Class string `json:"_class,omitempty"`
}
