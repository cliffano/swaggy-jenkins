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

type BranchImpllinks struct {
	Self Link `json:"self,omitempty"`
	Actions Link `json:"actions,omitempty"`
	Runs Link `json:"runs,omitempty"`
	Queue Link `json:"queue,omitempty"`
	Class string `json:"_class,omitempty"`
}
